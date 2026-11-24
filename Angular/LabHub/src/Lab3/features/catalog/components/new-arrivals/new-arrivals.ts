import {
  ChangeDetectionStrategy,
  Component,
  input,
} from '@angular/core';

import { Game } from '@/Lab3/features/models/Game';

@Component({
  selector: 'app-new-arrivals',
  templateUrl: './new-arrivals.html',
  styleUrl: './new-arrivals.scss',
  changeDetection: ChangeDetectionStrategy.OnPush,
})
export class NewArrivals {
  games = input.required<Game[]>();
}