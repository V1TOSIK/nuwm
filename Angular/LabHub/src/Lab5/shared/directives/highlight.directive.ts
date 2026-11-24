import { Directive, input, signal } from '@angular/core';

@Directive({
  selector: '[appHighlight]',
  standalone: true,
  host: {
    '(mouseenter)': 'hovered.set(true)',
    '(mouseleave)': 'hovered.set(false)',
    '[style.background-color]': 'hovered() ? appHighlight() : null',
  },
})
export class HighlightDirective {
  readonly appHighlight = input('lightyellow');
  readonly hovered = signal(false);
}