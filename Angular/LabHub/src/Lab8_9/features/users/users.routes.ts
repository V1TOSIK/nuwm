import { Routes } from '@angular/router';

import { UsersPage } from './pages/users.page';
import { UserPage } from './pages/user.page';

import { authGuard } from '@/Lab8_9/features/auth/guards/auth.guard';
import { unsavedGuard } from '@/Lab8_9/features/auth/guards/unsaved.guard';

export default [
  {
    path: '',
    component: UsersPage,
    title: 'Користувачі',
  },
  {
    path: ':id',
    component: UserPage,
    canActivate: [authGuard],
    canDeactivate: [unsavedGuard],
    title: 'Користувач',
  },
] satisfies Routes;