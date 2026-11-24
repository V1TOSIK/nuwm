
import { Component, inject, signal } from '@angular/core';
import { toObservable, toSignal } from '@angular/core/rxjs-interop';
import {
  catchError,
  debounceTime,
  distinctUntilChanged,
  map,
  of,
  switchMap,
  tap,
} from 'rxjs';

import {
  CitySearchService,
  SearchResult,
} from '../../services/fake-api';

interface SearchState {
  query: string;
  items: string[];
  ms: number | null;
  error: boolean;
}

@Component({
  selector: 'app-city-search',
  standalone: true,
  templateUrl: './city-search.html',
  styleUrl: './city-search.scss',
})
export class CitySearchComponent {
  private readonly citySearch = inject(CitySearchService);

  readonly query = signal('');
  readonly keyPresses = signal(0);
  readonly requests = this.citySearch.requests;
  readonly history = signal<SearchResult[]>([]);

  readonly result = toSignal(
    toObservable(this.query).pipe(
      map(query => query.trim()),
      debounceTime(300),
      distinctUntilChanged(),

      tap(query => console.log('[Search query]', query)),

      switchMap(query => {
        if (query.length < 2) {
          return of<SearchState>({
            query,
            items: [],
            ms: null,
            error: false,
          });
        }

        return this.citySearch.search(query).pipe(
          tap(response => {
            this.history.update(history =>
              [response, ...history].slice(0, 10),
            );
          }),

          map(response => ({
            query: response.query,
            items: response.items,
            ms: response.ms,
            error: false,
          })),

          catchError(() =>
            of<SearchState>({
              query,
              items: [],
              ms: null,
              error: true,
            }),
          ),
        );
      }),
    ),
    {
      initialValue: {
        query: '',
        items: [],
        ms: null,
        error: false,
      } satisfies SearchState,
    },
  );

  onInput(value: string): void {
    this.keyPresses.update(count => count + 1);
    this.query.set(value);
  }
}
