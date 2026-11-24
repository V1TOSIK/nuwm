import { Routes } from '@angular/router';

import { MainLayoutComponent } from '@/Lab8_9/widgets/main-layout/main-layout';
import { NotFoundComponent } from '@/Lab8_9/widgets/not-found/not-found';

import { adminGuard } from '@/Lab8_9/features/auth/guards/admin.guard';

export const lab89Routes: Routes = [
  {
    path: 'login',
    loadComponent: () => import('./features/auth/login/login.page'),
    title: 'Вхід',
  },
  {
    path: '',
    component: MainLayoutComponent,
    children: [
      {
        path: '',
        redirectTo: 'users',
        pathMatch: 'full',
      },
      {
        path: 'users',
        loadChildren: () => import('./features/users/users.routes'),
      },
      {
        path: 'about',
        loadComponent: () => import('./features/about/about.page'),
        title: 'Про застосунок',
      },
      {
        path: 'admin',
        canMatch: [adminGuard],
        loadComponent: () => import('./features/admin/admin.page'),
        title: 'Адміністрування',
      },
    ],
  },
  {
    path: 'not-found',
    component: NotFoundComponent,
    title: 'Сторінку не знайдено',
  },
  {
    path: '**',
    component: NotFoundComponent,
    title: 'Сторінку не знайдено',
  },
];