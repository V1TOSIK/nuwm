import { Component, inject } from '@angular/core';
import { ActivatedRoute, Router } from '@angular/router';

import {
  AuthService,
  UserRole,
} from '@/Lab8_9/features/auth/services/auth.service';

import { LAB89_ROUTES } from '@/Lab8_9/core/config/routes.config';

@Component({
  selector: 'app-login-page',
  standalone: true,
  templateUrl: `./login.page.html`,
  styleUrl: `./login.page.scss`,
})
export default class LoginPage {
  private readonly auth = inject(AuthService);
  private readonly router = inject(Router);
  private readonly route = inject(ActivatedRoute);

  login(role: UserRole): void {
    this.auth.login(role);

    const returnUrl = this.route.snapshot.queryParamMap.get('returnUrl');

    const destination =
      returnUrl?.startsWith('/') && !returnUrl.startsWith('//')
        ? returnUrl
        : LAB89_ROUTES.USERS;

    this.router.navigateByUrl(destination);

    this.router.navigateByUrl(destination);
  }
}