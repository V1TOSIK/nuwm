import { ChangeDetectionStrategy, Component, inject } from '@angular/core';
import { CartService } from "@/Lab3/features/cart/services/cart.service";
import { Icon } from "@/Lab3/shared/ui/icon/icon";
import { CurrencyPipe } from '@angular/common';
import { RouterLink } from '@angular/router';

@Component({
    imports: [Icon, CurrencyPipe, RouterLink],
  selector: 'app-lab3-header',
  templateUrl: './header.html',
  styleUrl: './header.scss',
  changeDetection: ChangeDetectionStrategy.OnPush,
})
export class Header {
  private readonly cartService = inject(CartService);

  readonly cartCount = this.cartService.count;
  readonly cartTotal = this.cartService.total;
}