import { Injectable } from '@angular/core';

@Injectable({
  providedIn: 'root',
})
export class LoggerService {
  log(message: string): void {
    const time = new Date().toLocaleTimeString('uk-UA', {
      hour12: false,
    });

    console.log(`[${time}] ${message}`);
  }
}