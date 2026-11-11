import { Component, inject } from '@angular/core';
import { CartService } from '../../../features/cart/services/cart.service';

@Component({
  imports: [],
  selector: 'app-header',
  styleUrl: './header.scss',
  templateUrl: './header.html',
})

export class Header {
  cartService = inject(CartService);
}
