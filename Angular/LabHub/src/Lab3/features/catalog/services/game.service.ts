import { Injectable, signal } from '@angular/core';
import { Game } from "@/Lab3/features/models/Game";

@Injectable({
  providedIn: 'root',
})
export class GamesService {
  private readonly games = signal<Game[]>([
    {
      id: 1,
      title: 'Catan',
      cover: 'https://placehold.co/400x300?text=Catan',
      price: 1499,
      players: '3–4',
      complexity: 2,
      inStock: true,
      rating: 5,
    },
    {
      id: 2,
      title: 'Ticket to Ride',
      cover: 'https://placehold.co/400x300?text=Ticket+to+Ride',
      price: 1899,
      players: '2–5',
      complexity: 2,
      inStock: true,
      rating: 4,
    },
    {
      id: 3,
      title: 'Carcassonne',
      cover: 'https://placehold.co/400x300?text=Carcassonne',
      price: 999,
      players: '2–5',
      complexity: 2,
      inStock: true,
      rating: 4,
    },
    {
      id: 4,
      title: 'Terraforming Mars',
      cover: 'https://placehold.co/400x300?text=Terraforming+Mars',
      price: 2499,
      players: '1–5',
      complexity: 4,
      inStock: true,
      rating: 5,
    },
    {
      id: 5,
      title: 'Dixit',
      cover: 'https://placehold.co/400x300?text=Dixit',
      price: 1199,
      players: '3–8',
      complexity: 1,
      inStock: false,
      rating: 5,
    },
    {
      id: 6,
      title: '7 Wonders',
      cover: 'https://placehold.co/400x300?text=7+Wonders',
      price: 1699,
      players: '3–7',
      complexity: 3,
      inStock: true,
      rating: 4,
    },
    {
      id: 7,
      title: 'Pandemic',
      cover: 'https://placehold.co/400x300?text=Pandemic',
      price: 1399,
      players: '2–4',
      complexity: 3,
      inStock: true,
      rating: 4,
    },
    {
      id: 8,
      title: 'Wingspan',
      cover: 'https://placehold.co/400x300?text=Wingspan',
      price: 2199,
      players: '1–5',
      complexity: 3,
      inStock: false,
      rating: 5,
    },
  ]);

  getAll() {
    return this.games.asReadonly();
  }
}