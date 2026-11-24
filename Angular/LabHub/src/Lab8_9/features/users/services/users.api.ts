import { inject, Injectable } from '@angular/core';
import { HttpClient, HttpErrorResponse } from '@angular/common/http';
import { Observable, retry, throwError, timer, map } from 'rxjs';

import { API_URL } from '@/Lab8_9/core/config/api.config';
import { UserDTO } from '@/Lab8_9/features/users/models/user.dto';
import { UserVm } from '@/Lab8_9/features/users/models/user.vm';
import { PostDTO } from '@/Lab8_9/features/users/models/post.dto';
import { CreatePostDTO } from '@/Lab8_9/features/users/models/create-post.dto';

@Injectable({
  providedIn: 'root',
})
export class UsersApi {
  private readonly http = inject(HttpClient);
  private readonly apiUrl = inject(API_URL);

  getUsers(): Observable<UserVm[]> {
    return this.http.get<UserDTO[]>(`${this.apiUrl}/users`).pipe(
      retry({
        count: 2,
        delay: (error: HttpErrorResponse, retryCount: number) => {
          if (error.status === 0 || error.status >= 500) {
            return timer(500 * retryCount);
          }

          return throwError(() => error);
        },
      }),
      map(users => users.map(user => this.toUserVm(user))),
    );
  }

  getUser(id: number): Observable<UserVm> {
    return this.http.get<UserDTO>(`${this.apiUrl}/users/${id}`).pipe(
      retry({
        count: 2,
        delay: (error: HttpErrorResponse, retryCount: number) => {
          if (error.status === 0 || error.status >= 500) {
            return timer(500 * retryCount);
          }

          return throwError(() => error);
        },
      }),
      map(user => this.toUserVm(user)),
    );
  }

  getPostsByUser(userId: number): Observable<PostDTO[]> {
    return this.http
      .get<PostDTO[]>(`${this.apiUrl}/posts`, {
        params: { userId },
      })
      .pipe(
        retry({
          count: 2,
          delay: (error: HttpErrorResponse, retryCount: number) => {
            if (error.status === 0 || error.status >= 500) {
              return timer(500 * retryCount);
            }

            return throwError(() => error);
          },
        }),
      );
  }

  createPost(dto: CreatePostDTO): Observable<PostDTO> {
    return this.http.post<PostDTO>(`${this.apiUrl}/posts`, dto);
  }

  private toUserVm(user: UserDTO): UserVm {
    return {
      id: user.id,
      name: user.name,
      email: user.email,
      city: user.address.city,
      company: user.company.name,
    };
  }
}