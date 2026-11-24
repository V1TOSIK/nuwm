import {
  Component,
  computed,
  inject,
  signal,
} from '@angular/core';
import { Router, ActivatedRoute } from '@angular/router';
import {
  toObservable,
  toSignal,
} from '@angular/core/rxjs-interop';
import {
  catchError,
  map,
  of,
  startWith,
  switchMap,
} from 'rxjs';

import { UsersApi } from '@/Lab8_9/features/users/services/users.api';
import { UserVm } from '@/Lab8_9/features/users/models/user.vm';
import { LAB89_ROUTES } from '@/Lab8_9/core/config/routes.config';

type UsersState = {
  status: 'loading' | 'error' | 'success';
  data: UserVm[];
};

@Component({
  selector: 'app-users-page',
  standalone: true,
  templateUrl: './users.page.html',
  styleUrl: './users.page.scss',
})
export class UsersPage {
  private readonly usersApi = inject(UsersApi);
  private readonly router = inject(Router);
  private readonly route = inject(ActivatedRoute);

  readonly reload = signal(0);
  readonly searchQuery = signal('');

  readonly usersState = toSignal(
    toObservable(this.reload).pipe(
      switchMap(() =>
        this.usersApi.getUsers().pipe(
          map(
            (users): UsersState => ({
              status: 'success',
              data: users,
            }),
          ),
          catchError(() =>
            of<UsersState>({
              status: 'error',
              data: [],
            }),
          ),
          startWith<UsersState>({
            status: 'loading',
            data: [],
          }),
        ),
      ),
    ),
    {
      initialValue: {
        status: 'loading',
        data: [],
      } as UsersState,
    },
  );

  readonly filteredUsers = computed(() => {
    const users = this.usersState().data;
    const query = this.searchQuery().trim().toLowerCase();

    if (!query) {
      return users;
    }

    return users.filter(user =>
      user.name.toLowerCase().includes(query),
    );
  });

  constructor() {
    this.route.queryParamMap.subscribe(params => {
      this.searchQuery.set(params.get('q') ?? '');
    });
  }

  onSearch(value: string): void {
    this.searchQuery.set(value);

    this.router.navigate([], {
      relativeTo: this.route,
      queryParams: {
        q: value || null,
      },
      queryParamsHandling: 'merge',
      replaceUrl: true,
    });
  }

  openUser(id: number): void {
    this.router.navigate([LAB89_ROUTES.USERS, id]);
  }

  retry(): void {
    this.reload.update(value => value + 1);
  }
}