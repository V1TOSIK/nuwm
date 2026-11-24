import { Injectable, signal } from '@angular/core';

@Injectable({
  providedIn: 'root',
})
export class NotificationService {
  readonly message = signal<string | null>(null);

  private timeoutId: ReturnType<typeof setTimeout> | null = null;

  show(message: string): void {
    if (this.timeoutId !== null) {
      clearTimeout(this.timeoutId);
    }

    this.message.set(message);

    this.timeoutId = setTimeout(() => {
      this.message.set(null);
      this.timeoutId = null;
    }, 4000);
  }
}