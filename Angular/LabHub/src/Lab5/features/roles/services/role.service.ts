import { Injectable, signal } from '@angular/core';

export type UserRole = 'user' | 'admin';

@Injectable({
  providedIn: 'root',
})
export class RoleService {
  readonly currentRole = signal<UserRole>('user');
}