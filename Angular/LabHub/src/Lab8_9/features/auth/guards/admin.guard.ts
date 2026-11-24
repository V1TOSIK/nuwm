import { inject } from '@angular/core';
import { CanMatchFn, Router } from '@angular/router';

import { AuthService } from '@/Lab8_9/features/auth/services/auth.service';
import { LAB89_ROUTES } from '@/Lab8_9/core/config/routes.config';

export const adminGuard: CanMatchFn = () => {
  const auth = inject(AuthService);
  const router = inject(Router);

  if (auth.isAuthenticated() && auth.isAdmin()) {
    return true;
  }

  return router.parseUrl(LAB89_ROUTES.NOT_FOUND);
};