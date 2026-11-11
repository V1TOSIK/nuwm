import { Component, input, output } from '@angular/core';
import { Drink } from '../../models/drink.model';

@Component({
  imports: [],
  selector: 'app-drink-card',
  styleUrl: './drink-card.scss',
  templateUrl: './drink-card.html',
})

export class DrinkCard {
  drink = input.required<Drink>();
  added = output<Drink>();

  onAddDrink(): void {
    this.added.emit(this.drink());
  }
}