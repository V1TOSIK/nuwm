import {
  ChangeDetectionStrategy,
  Component,
  computed,
  inject,
  signal,
} from '@angular/core';

import { Game } from '@/Lab3/features/models/Game';
import { GamesService } from '@/Lab3/features/catalog/services/game.service';
import { CartService } from '@/Lab3/features/cart/services/cart.service';
import { GameCard } from '@/Lab3/features/game-card/game-card';
import { Rating } from '@/Lab3/shared/ui/rating/rating';
import { NewArrivals } from '@/Lab3/features/catalog/components/new-arrivals/new-arrivals';
import { Header } from '@/Lab3/widgets/header/header';

@Component({
  selector: 'app-lab3-page',
  imports: [Header, GameCard, Rating, NewArrivals],
  templateUrl: './lab3.page.html',
  styleUrl: './lab3.page.scss',
  changeDetection: ChangeDetectionStrategy.OnPush,
})
export class Lab3Page {
  private readonly gamesService = inject(GamesService);
  private readonly cartService = inject(CartService);

  readonly games = this.gamesService.getAll();

  readonly searchQuery = signal('');
  readonly minRating = signal(0);
  readonly newArrivals = computed(() => this.games().slice(0, 3));

  readonly filteredGames = computed(() => {
    const query = this.searchQuery().trim().toLowerCase();
    const rating = this.minRating();

    return this.games().filter(game =>
      game.title.toLowerCase().includes(query) &&
      game.rating >= rating
    );
  });

  readonly experimentGames = signal<Game[]>([]);

  mutateParentArray(): void {
    const games = this.experimentGames();

    games.push(this.createExperimentGame(games.length, 'Mutable'));

    this.experimentGames.set(games);
  }

  replaceParentArray(): void {
    this.experimentGames.update(games => [
      ...games,
      this.createExperimentGame(games.length, 'Immutable'),
    ]);
  }

  private createExperimentGame(index: number, type: string): Game {
    return {
      id: 200 + index,
      title: `${type} game ${index + 1}`,
      cover: 'https://placehold.co/400x300?text=Test+Game',
      price: 500,
      players: '2–4',
      complexity: 2,
      inStock: true,
      rating: 4,
    };
  }

  onSearchChange(event: Event): void {
    const input = event.target as HTMLInputElement;
    this.searchQuery.set(input.value);
  }

  onRatingChange(value: number): void {
    this.minRating.set(value);
  }

  addToCart(game: Game): void {
    this.cartService.add(game);
  }
}