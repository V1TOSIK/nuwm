
import { Component, DestroyRef, inject, signal } from '@angular/core';
import { takeUntilDestroyed } from '@angular/core/rxjs-interop';
import { Subject, exhaustMap, finalize, tap } from 'rxjs';

import { BookingService } from '../../services/fake-api';

@Component({
  selector: 'app-booking',
  standalone: true,
  templateUrl: './booking.html',
  styleUrl: './booking.scss',
})
export class BookingComponent {
  private readonly bookingService = inject(BookingService);
  private readonly destroyRef = inject(DestroyRef);

  private readonly bookingClicks = new Subject<void>();

  readonly clicks = signal(0);
  readonly successfulBookings = signal(0);
  readonly isBooking = signal(false);

  constructor() {
    this.bookingClicks.pipe(
      exhaustMap(() => {
        this.isBooking.set(true);

        return this.bookingService.book().pipe(
          tap(success => {
            if (success) {
              this.successfulBookings.update(count => count + 1);
            }
          }),
          finalize(() => this.isBooking.set(false)),
        );
      }),
      takeUntilDestroyed(this.destroyRef),
    ).subscribe();
  }

  book(): void {
    this.clicks.update(count => count + 1);
    this.bookingClicks.next();
  }
}
