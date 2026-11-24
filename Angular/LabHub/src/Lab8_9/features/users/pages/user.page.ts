import {
  Component,
  inject,
  input,
  numberAttribute,
  signal,
  ViewChild,
} from '@angular/core';
import { Router } from '@angular/router';
import { toObservable, toSignal } from '@angular/core/rxjs-interop';
import {
  catchError,
  map,
  of,
  startWith,
  switchMap,
  tap,
} from 'rxjs';

import { UsersApi } from '@/Lab8_9/features/users/services/users.api';
import { UserVm } from '@/Lab8_9/features/users/models/user.vm';
import { PostDTO } from '@/Lab8_9/features/users/models/post.dto';
import { PostFormComponent } from '@/Lab8_9/features/users/components/post-form/post-form';
import { NotificationService } from '@/Lab8_9/core/services/notification.service';

import { LAB89_ROUTES } from '@/Lab8_9/core/config/routes.config';

type UserState = {
  status: 'loading' | 'error' | 'success';
  data: UserVm | null;
};

@Component({
  selector: 'app-user-page',
  standalone: true,
  imports: [PostFormComponent],
  templateUrl: './user.page.html',
  styleUrl: './user.page.scss',
})
export class UserPage {
  readonly id = input(0, {
    transform: numberAttribute,
  });

  private readonly usersApi = inject(UsersApi);
  private readonly router = inject(Router);
  private readonly notifications = inject(NotificationService);

  @ViewChild(PostFormComponent)
  private postForm?: PostFormComponent;

  readonly posts = signal<PostDTO[]>([]);

  readonly userState = toSignal(
    toObservable(this.id).pipe(
      switchMap(id =>
        this.usersApi.getUser(id).pipe(
          map(
            (user): UserState => ({
              status: 'success',
              data: user,
            }),
          ),
          catchError(() =>
            of<UserState>({
              status: 'error',
              data: null,
            }),
          ),
          startWith<UserState>({
            status: 'loading',
            data: null,
          }),
        ),
      ),
    ),
    {
      initialValue: {
        status: 'loading',
        data: null,
      } as UserState,
    },
  );

  private readonly postsSubscription = toSignal(
    toObservable(this.id).pipe(
      switchMap(id =>
        this.usersApi.getPostsByUser(id).pipe(
          tap(posts => this.posts.set(posts)),
          catchError(() => {
            this.posts.set([]);
            return of([]);
          }),
        ),
      ),
    ),
    {
      initialValue: [],
    },
  );

  createPost(data: { title: string; body: string }): void {
    this.usersApi
      .createPost({
        userId: this.id(),
        title: data.title,
        body: data.body,
      })
      .subscribe({
        next: post => {
          this.posts.update(posts => [post, ...posts]);

          this.notifications.show('Пост успішно створено');

          this.router.navigate([LAB89_ROUTES.USERS]);
        },
        error: () => {
          this.notifications.show('Не вдалося створити пост');
        },
      });
  }

  hasUnsavedChanges(): boolean {
    return !!this.postForm?.hasUnsavedChanges();
  }

  goBack(): void {
    this.router.navigate([LAB89_ROUTES.USERS]);
  }
}