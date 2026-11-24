import { inject } from '@angular/core';
import { CanActivateFn, Router } from '@angular/router';

import { AuthService } from '@/Lab8_9/features/auth/services/auth.service';
import { LAB89_ROUTES } from '@/Lab8_9/core/config/routes.config';

export const authGuard: CanActivateFn = (_route, state) => {
  const auth = inject(AuthService);
  const router = inject(Router);

  if (auth.isAuthenticated()) {
    return true;
  }

  return router.createUrlTree([LAB89_ROUTES.LOGIN], {
    queryParams: {
      returnUrl: state.url,
    },
  });
};