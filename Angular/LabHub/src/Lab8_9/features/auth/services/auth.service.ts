import { Injectable, signal } from '@angular/core';

export type UserRole = 'user' | 'admin';

@Injectable({
  providedIn: 'root',
})
export class AuthService {
  readonly role = signal<UserRole | null>(null);

  readonly isAuthenticated = signal(false);

  login(role: UserRole): void {
    this.role.set(role);
    this.isAuthenticated.set(true);
  }

  logout(): void {
    this.role.set(null);
    this.isAuthenticated.set(false);
  }

  isAdmin(): boolean {
    return this.role() === 'admin';
  }
}