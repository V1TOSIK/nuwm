import { HttpInterceptorFn } from '@angular/common/http';
import { finalize } from 'rxjs';

export const loggingInterceptor: HttpInterceptorFn = (req, next) => {
  const startedAt = Date.now();

  return next(req).pipe(
    finalize(() => {
      const duration = Date.now() - startedAt;

      console.log(
        `[HTTP] ${req.method} ${req.urlWithParams} - ${duration}ms`,
      );
    }),
  );
};