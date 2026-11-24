import { Routes } from '@angular/router';
import { LABS } from '@/shared/config/navigation-items';

export const routes: Routes = [
  {
    path: 'labs',
    children: LABS.map(lab => ({
      path: lab.path,
      component: lab.component,
      ...('children' in lab ? { children: lab.children } : {}),
    })),
  },
];