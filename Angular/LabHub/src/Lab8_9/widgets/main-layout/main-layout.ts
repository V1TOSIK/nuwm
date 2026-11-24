import { Component, inject } from '@angular/core';
import {
  Router,
  RouterLink,
  RouterLinkActive,
  RouterOutlet,
} from '@angular/router';

import { AuthService } from '@/Lab8_9/features/auth/services/auth.service';
import { UserNotificationsComponent } from '@/Lab8_9/widgets/user-notifications/user-notifications';
import { LAB89_ROUTES } from '@/Lab8_9/core/config/routes.config';

@Component({
  selector: 'app-main-layout',
  standalone: true,
  imports: [
    RouterOutlet,
    RouterLink,
    RouterLinkActive,
    UserNotificationsComponent,
  ],
  templateUrl: './main-layout.html',
  styleUrl: './main-layout.scss',
})
export class MainLayoutComponent {
  readonly auth = inject(AuthService);
  readonly LAB89_ROUTES = LAB89_ROUTES;

  private readonly router = inject(Router);

  logout(): void {
    this.auth.logout();
    this.router.navigate([this.LAB89_ROUTES.LOGIN]);
  }
}