import { ApplicationConfig, provideBrowserGlobalErrorListeners } from '@angular/core';
import { provideRouter, withComponentInputBinding } from '@angular/router';
import { routes } from '@/app/app.routes';
import { SVG_SPRITE_PATH } from '@/Lab3/shared/ui/icon/sprite-path';
import { LOCALE_ID } from '@angular/core';
import { APP_CONFIG } from '@/Lab7/core/config/app-config';
import {
  provideHttpClient,
  withInterceptors,
} from '@angular/common/http';

import { API_URL } from '@/Lab8_9/core/config/api.config';
import { loggingInterceptor } from '@/Lab8_9/core/interceptors/logging.interceptor';
import { errorInterceptor } from '@/Lab8_9/core/interceptors/error.interceptor';

export const appConfig: ApplicationConfig = {
  providers: [
    provideBrowserGlobalErrorListeners(),
    provideRouter(routes, withComponentInputBinding()),
    { provide: SVG_SPRITE_PATH, useValue: '/icons/sprite.svg' },
    { provide: LOCALE_ID, useValue: 'uk' },
    {
      provide: APP_CONFIG,
      useValue: {
        appName: 'Мої задачі',
        maxTasks: 10,
      },
    },
    provideHttpClient(
      withInterceptors([
        loggingInterceptor,
        errorInterceptor,
      ]),
    ),

    {
      provide: API_URL,
      useValue: 'https://jsonplaceholder.typicode.com',
    },
  ]
};