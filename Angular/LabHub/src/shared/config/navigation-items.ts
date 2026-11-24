import { ROUTE_PATHS } from '@/shared/config/route-paths';
import { Lab3Page } from '@/Lab3/pages/lab3.page';
import { Lab4Page } from '@/Lab4/pages/lab4.page';
import { Lab5Page } from '@/Lab5/pages/lab5.page';
import { Lab6Page } from '@/Lab6/pages/lab6.page';
import { Lab7Page } from '@/Lab7/pages/lab7.page';
import { Lab8_9Page } from '@/Lab8_9/pages/lab8_9.page';
import { lab89Routes } from '@/Lab8_9/app.routes';
import { RxLabPage } from '@/Lab10/features/rx-lab/pages/rx-lab.page';

export const LABS = [
  {
    path: ROUTE_PATHS.LAB3,
    label: 'Lab 3',
    component: Lab3Page
  },
  {
    path: ROUTE_PATHS.LAB4,
    label: 'Lab 4',
    component: Lab4Page
  },
  {
    path: ROUTE_PATHS.LAB5,
    label: 'Lab 5',
    component: Lab5Page
  },
  {
    path: ROUTE_PATHS.LAB6,
    label: 'Lab 6',
    component: Lab6Page
  },
  {
    path: ROUTE_PATHS.LAB7,
    label: 'Lab 7',
    component: Lab7Page
  },
  {
    path: ROUTE_PATHS.LAB8_9,
    label: 'Lab 8-9',
    component: Lab8_9Page,
    children: lab89Routes
  },
  {
    path: ROUTE_PATHS.LAB10,
    label: 'Lab 10',
    component: RxLabPage,
  }
] as const;