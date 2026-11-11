import { Category } from './category.model';

export interface Drink {
  id: number;
  name: string;
  price: number;
  category: Category;
}