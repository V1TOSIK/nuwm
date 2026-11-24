import {
  computed,
  effect,
  inject,
  Injectable,
  signal,
} from '@angular/core';

import { Task } from '@/Lab7/features/tasks/models/task';
import { APP_CONFIG } from '@/Lab7/core/config/app-config';
import { LoggerService } from '@/Lab7/core/services/logger.service';
import { StorageService } from '@/Lab7/core/services/storage.service';

@Injectable({
  providedIn: 'root',
})
export class TasksStore {
  private readonly config = inject(APP_CONFIG);
  private readonly logger = inject(LoggerService);
  private readonly storage = inject(StorageService);

  private readonly storageKey = 'lab7-tasks';

  private readonly _tasks = signal<Task[]>(
    this.storage.get<Task[]>(this.storageKey, []),
  );

  readonly tasks = this._tasks.asReadonly();

  readonly totalTasks = computed(() => this.tasks().length);

  readonly completedTasks = computed(
    () => this.tasks().filter(task => task.done).length,
  );

  readonly progress = computed(() => {
    const total = this.totalTasks();

    return total === 0
      ? 0
      : Math.round((this.completedTasks() / total) * 100);
  });

  readonly maxTasks = this.config.maxTasks;

  constructor() {
    effect(() => {
      this.storage.set(this.storageKey, this.tasks());
    });
  }

  add(title: string): boolean {
    const trimmedTitle = title.trim();

    if (!trimmedTitle || this.tasks().length >= this.maxTasks) {
      return false;
    }

    const nextId = Math.max(
      0,
      ...this.tasks().map(task => task.id),
    ) + 1;

    const task: Task = {
      id: nextId,
      title: trimmedTitle,
      done: false,
      createdAt: new Date().toISOString(),
    };

    this._tasks.update(tasks => [...tasks, task]);

    this.logger.log(`Додано задачу: ${trimmedTitle}`);

    return true;
  }

  toggle(id: number): void {
    const task = this.tasks().find(item => item.id === id);

    if (!task) {
      return;
    }

    this._tasks.update(tasks =>
      tasks.map(item =>
        item.id === id
          ? { ...item, done: !item.done }
          : item,
      ),
    );

    this.logger.log(
      `${task.done ? 'Повернуто в роботу' : 'Виконано'} задачу: ${task.title}`,
    );
  }

  remove(id: number): void {
    const task = this.tasks().find(item => item.id === id);

    if (!task) {
      return;
    }

    this._tasks.update(tasks =>
      tasks.filter(item => item.id !== id),
    );

    this.logger.log(`Видалено задачу: ${task.title}`);
  }
}