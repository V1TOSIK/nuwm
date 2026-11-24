
import { Component, signal } from '@angular/core';
import { CommonModule } from '@angular/common';

import { HoverColorDirective } from '@/Lab4/features/hover/directives/hover-color.directive';
import { CompoundInterestPipe } from '@/Lab4/features/compound-interest/pipes/compound-interest.pipe';
import { ContentProjectionComponent } from '@/Lab4/features/content-projection/components/content-projection/content-projection.component';

@Component({
  selector: 'app-example-component',
  standalone: true,
  imports: [
    CommonModule,
    HoverColorDirective,
    CompoundInterestPipe,
    ContentProjectionComponent,
  ],
  templateUrl: './example.component.html',
  styleUrl: './example.component.scss',
})
export class ExampleComponent {
  readonly hoverColor = signal('#90caf9');
}
