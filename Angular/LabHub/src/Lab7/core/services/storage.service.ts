import { Injectable } from '@angular/core';

@Injectable({
  providedIn: 'root',
})
export class StorageService {
  get<T>(key: string, fallback: T): T {
    try {
      const value = localStorage.getItem(key);

      return value ? JSON.parse(value) as T : fallback;
    } catch {
      return fallback;
    }
  }

  set<T>(key: string, value: T): void {
    try {
      localStorage.setItem(key, JSON.stringify(value));
    } catch (error) {
      console.error('Не вдалося зберегти дані:', error);
    }
  }
}