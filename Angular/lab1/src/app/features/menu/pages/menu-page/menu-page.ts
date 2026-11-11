import { Component, computed, inject, input, output, signal } from '@angular/core';
import { MenuList } from '../../components/menu-list/menu-list';
import { CategoryFilter } from '../../components/category-filter/category-filter';
import { Category } from '../../models/category.model';
import { Drink } from '../../models/drink.model';
import { DRINKS } from '../../data/menu.mock';
import { CartService } from '../../../cart/services/cart.service';
import { CartItem } from '../../../cart/models/cart-item.model';

@Component({
  imports: [CategoryFilter, MenuList],
  selector: 'app-menu-page',
  styleUrl: './menu-page.scss',
  templateUrl: './menu-page.html',
})
export class MenuPage {
  cartService = inject(CartService);
  protected category = signal<Category | 'all'>('all');
  protected drinks = computed(() =>
  this.category() === 'all'
  ? DRINKS
  : DRINKS.filter(d => d.category === this.category())
  );

  onDrinkAdded(drink: Drink): void {
    const cartItem: CartItem = {
      id: drink.id,
      name: drink.name,
      price: drink.price
    };
    
    this.cartService.add({ ...cartItem });
  }
}
