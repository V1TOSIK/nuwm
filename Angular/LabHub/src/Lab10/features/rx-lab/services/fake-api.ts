
import { Injectable, signal } from '@angular/core';
import {
  Observable,
  of,
  throwError,
  timer,
} from 'rxjs';
import { map, switchMap } from 'rxjs/operators';

const CITIES = [
  'Київ',
  'Харків',
  'Одеса',
  'Дніпро',
  'Львів',
  'Запоріжжя',
  'Кривий Ріг',
  'Миколаїв',
  'Вінниця',
  'Полтава',
  'Чернігів',
  'Черкаси',
  'Житомир',
  'Суми',
  'Хмельницький',
  'Чернівці',
  'Рівне',
  'Івано-Франківськ',
  'Тернопіль',
  'Луцьк',
  'Ужгород',
  'Кропивницький',
  'Херсон',
];

export interface SearchResult {
  query: string;
  items: string[];
  ms: number;
}

@Injectable({
  providedIn: 'root',
})
export class CitySearchService {
  readonly requests = signal(0);

  search(query: string): Observable<SearchResult> {
    this.requests.update(n => n + 1);

    const q = query.toLowerCase();
    const items = CITIES.filter(city =>
      city.toLowerCase().includes(q),
    );

    const ms = Math.round(200 + Math.random() * 1300);

    return timer(ms).pipe(
      switchMap(() =>
        Math.random() < 0.1
          ? throwError(() => new Error('Сервер недоступний'))
          : of({ query, items, ms }),
      ),
    );
  }
}

@Injectable({
  providedIn: 'root',
})
export class BookingService {
  book(): Observable<boolean> {
    return timer(2000).pipe(
      map(() => true),
    );
  }
}

@Injectable({
  providedIn: 'root',
})
export class NotesService {
  saveDraft(note: { title: string; text: string }): Observable<Date> {
    return timer(500).pipe(
      map(() => new Date()),
    );
  }
}
