import {
  Directive,
  ElementRef,
  HostListener,
  Input,
  Renderer2,
} from '@angular/core';

@Directive({
  selector: '[appHover]',
  standalone: true,
})
export class HoverColorDirective {
  private isHovered = false;
  private currentColor = '';

  @Input()
  set hoverColor(value: string) {
    this.currentColor = value;

    if (this.isHovered) {
      this.renderer.setStyle(
        this.element.nativeElement,
        'background-color',
        this.currentColor,
      );
    }
  }

  constructor(
    private readonly element: ElementRef<HTMLElement>,
    private readonly renderer: Renderer2,
  ) {}

  @HostListener('mouseenter')
  onMouseEnter(): void {
    this.isHovered = true;

    this.renderer.setStyle(
      this.element.nativeElement,
      'background-color',
      this.currentColor,
    );
  }

  @HostListener('mouseleave')
  onMouseLeave(): void {
    this.isHovered = false;

    this.renderer.removeStyle(
      this.element.nativeElement,
      'background-color',
    );
  }
}
