import { computed, Injectable, signal } from "@angular/core";
import { CartItem } from "../models/cart-item.model";

@Injectable({ providedIn: 'root' })
export class CartService {
    private items = signal<CartItem[]>([]);
    readonly count = computed(() => this.items().length);
    add(item: CartItem) {
        this.items.update(list => [...list, item]);
    }
}