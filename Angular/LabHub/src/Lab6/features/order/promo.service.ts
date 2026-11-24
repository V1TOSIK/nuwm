import { Injectable } from '@angular/core';
import { delay, Observable, of } from 'rxjs';

@Injectable({
  providedIn: 'root',
})
export class PromoService {
  private readonly codes: Record<string, number> = {
    STUDENT10: 0.1,
    ANGULAR20: 0.2,
  };

  check(code: string): Observable<number | null> {
    const discount = this.codes[code.trim().toUpperCase()] ?? null;

    return of(discount).pipe(delay(800));
  }
}