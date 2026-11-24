import { ApplicationConfig, provideBrowserGlobalErrorListeners } from '@angular/core';
import { provideRouter } from '@angular/router';
import { routes } from '@/app/app.routes';
import { SVG_SPRITE_PATH } from '@/Lab3/shared/ui/icon/sprite-path';
import { LOCALE_ID } from '@angular/core';

export const appConfig: ApplicationConfig = {
  providers: [
    provideBrowserGlobalErrorListeners(),
    provideRouter(routes),
    { provide: SVG_SPRITE_PATH, useValue: '/icons/sprite.svg' },
    { provide: LOCALE_ID, useValue: 'uk' }
  ]
};
