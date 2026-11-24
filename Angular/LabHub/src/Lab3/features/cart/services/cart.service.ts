import { Injectable, computed, signal } from '@angular/core';
import { Game } from "@/Lab3/features/models/Game";

@Injectable({
  providedIn: 'root',
})
export class CartService {
  private readonly items = signal<Game[]>([]);

  readonly cartItems = this.items.asReadonly();

  readonly count = computed(() => this.items().length);

  readonly total = computed(() =>
    this.items().reduce((sum, game) => sum + game.price, 0)
  );

  add(game: Game): void {
    this.items.update(items => [...items, game]);
  }

  remove(gameId: number): void {
    this.items.update(items => {
      const index = items.findIndex(game => game.id === gameId);

      if (index === -1) {
        return items;
      }

      return items.filter((_, i) => i !== index);
    });
  }

  clear(): void {
    this.items.set([]);
  }
}