import { Pipe, PipeTransform } from '@angular/core';

@Pipe({
  name: 'plural',
  standalone: true,
})
export class PluralPipe implements PipeTransform {
  transform(value: number, forms: [string, string, string]): string {
    const lastTwoDigits = value % 100;
    const lastDigit = value % 10;

    if (lastDigit === 1 && lastTwoDigits !== 11) {
      return forms[0];
    }

    if (
      lastDigit >= 2 &&
      lastDigit <= 4 &&
      (lastTwoDigits < 12 || lastTwoDigits > 14)
    ) {
      return forms[1];
    }

    return forms[2];
  }
}