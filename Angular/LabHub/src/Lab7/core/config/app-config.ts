import { InjectionToken } from '@angular/core';

export interface AppConfig {
  appName: string;
  maxTasks: number;
}

export const APP_CONFIG = new InjectionToken<AppConfig>('APP_CONFIG');