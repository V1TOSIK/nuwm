import { Component, inject } from '@angular/core';
import { NotificationService } from '@/Lab8_9/core/services/notification.service';

@Component({
  selector: 'app-user-notifications',
  standalone: true,
  templateUrl: './user-notifications.html',
  styleUrl: './user-notifications.scss',
})
export class UserNotificationsComponent {
  readonly notification = inject(NotificationService);
}