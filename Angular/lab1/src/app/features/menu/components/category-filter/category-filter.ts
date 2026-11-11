import { Component, input, output } from '@angular/core';
import { Category, CATEGORY_LABELS } from '../../models/category.model';

@Component({
  imports: [],
  selector: 'app-category-filter',
  styleUrl: './category-filter.scss',
  templateUrl: './category-filter.html',
})
export class CategoryFilter {
  protected readonly categoryLabels = CATEGORY_LABELS;

  protected readonly categories = Object.keys(CATEGORY_LABELS) as Category[];


  checked = output<Category | 'all'>();

  onCategorySelected(category: Category | 'all'): void {
    console.log('Selected category:', category);
    this.checked.emit(category);
  }
}
