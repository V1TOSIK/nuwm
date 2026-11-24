export interface Game {
    id: number;
    title: string;
    cover: string; // URL зображення
    price: number;
    players: string; // "2–4"
    complexity: number; // 1..5
    inStock: boolean;
    rating: number; // 0..5
}