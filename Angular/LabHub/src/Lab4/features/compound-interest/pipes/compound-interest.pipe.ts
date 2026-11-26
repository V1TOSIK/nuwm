import { Pipe, PipeTransform } from '@angular/core';

@Pipe({
  name: 'compoundInterest'
})
export class CompoundInterestPipe implements PipeTransform {
  private readonly cache = new Map<string, number>();

  transform(
    principal: number,
    rate: number,
    compoundsPerYear: number,
    years: number,
  ): number {
    const key = `${principal}_${rate}_${compoundsPerYear}_${years}`;

    if (this.cache.has(key)) {
      return this.cache.get(key)!;
    }

    if (compoundsPerYear <= 0) {
      return NaN;
    }

    const result =
      principal *
      Math.pow(
        1 + rate / compoundsPerYear,
        compoundsPerYear * years,
      );

    this.cache.set(key, result);

    return result;
  }
}
