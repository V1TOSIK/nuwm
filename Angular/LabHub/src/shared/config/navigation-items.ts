import { ROUTE_PATHS } from '@/shared/config/route-paths';
import { Lab3Page } from '@/Lab3/pages/lab3.page';
import { Lab4Page } from '@/Lab4/pages/lab4.page';

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
  }
] as const;