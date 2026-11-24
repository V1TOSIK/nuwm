import { inject } from '@angular/core';
import {
  HttpErrorResponse,
  HttpInterceptorFn,
} from '@angular/common/http';
import { catchError, throwError } from 'rxjs';

import { NotificationService } from '@/Lab8_9/core/services/notification.service';

export const errorInterceptor: HttpInterceptorFn = (req, next) => {
  const notifications = inject(NotificationService);

  return next(req).pipe(
    catchError((error: HttpErrorResponse) => {
      let message: string;

      if (error.status === 0) {
        message = 'Немає з’єднання із сервером';
      } else if (error.status === 404) {
        message = 'Запитаний ресурс не знайдено';
      } else if (error.status >= 500) {
        message = 'Помилка сервера';
      } else {
        message = 'Сталася помилка під час виконання запиту';
      }

      notifications.show(message);

      return throwError(() => error);
    }),
  );
};