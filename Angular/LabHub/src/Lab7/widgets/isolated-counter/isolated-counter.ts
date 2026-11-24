import { Component, inject } from '@angular/core';
import { ClickCounterService } from '@/Lab7/core/services/click-counter.service';

@Component({
  selector: 'app-isolated-counter',
  standalone: true,
  providers: [ClickCounterService],
  templateUrl: './isolated-counter.html',
  styleUrl: './isolated-counter.scss',
})
export class IsolatedCounter {
  readonly counter = inject(ClickCounterService);
}