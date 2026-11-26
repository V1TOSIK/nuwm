import { Component, computed, inject, signal } from "@angular/core";
import { Header } from "@/Lab1/core/layout/header/header";
import { MenuList } from "@/Lab1/features/menu/components/menu-list/menu-list";
import { DRINKS } from "../features/menu/data/menu.mock";
import { CartService } from "../features/cart/services/cart.service";
import { Category } from "../features/menu/models/category.model";
import { CartItem } from "../features/cart/models/cart-item.model";
import { Drink } from "../features/menu/models/drink.model";
import { CategoryFilter } from "../features/menu/components/category-filter/category-filter";

@Component({
  selector: 'app-lab1-page',
  standalone: true,
  imports: [Header, CategoryFilter, MenuList],
  templateUrl: './lab1.page.html',
  styleUrl: './lab1.page.scss',
})
export class Lab1Page {
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