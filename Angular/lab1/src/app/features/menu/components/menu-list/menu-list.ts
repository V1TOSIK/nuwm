import { Component, input, output } from '@angular/core';
import { Drink } from '../../models/drink.model';
import { DrinkCard } from '../drink-card/drink-card';

@Component({
  imports: [DrinkCard],
  selector: 'app-menu-list',
  styleUrl: './menu-list.scss',
  templateUrl: './menu-list.html',
})

export class MenuList {
  list = input.required<Drink[]>();

  added = output<Drink>();
  
  onDrinkAdded(drink: Drink): void {
    this.added.emit(drink);
  }
}