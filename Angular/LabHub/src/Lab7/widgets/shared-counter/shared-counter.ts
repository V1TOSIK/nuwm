import { Component, inject } from '@angular/core';
import { ClickCounterService } from '@/Lab7/core/services/click-counter.service';

@Component({
  selector: 'app-shared-counter',
  standalone: true,
  templateUrl: './shared-counter.html',
  styleUrl: './shared-counter.scss',
})
export class SharedCounter {
  readonly counter = inject(ClickCounterService);
}