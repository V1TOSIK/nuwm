import { Component, inject, signal } from '@angular/core';
import { FormsModule } from '@angular/forms';
import { TasksStore } from '@/Lab7/features/tasks/services/tasks.store';

@Component({
  selector: 'app-task-form',
  standalone: true,
  imports: [FormsModule],
  templateUrl: './task-form.html',
  styleUrl: './task-form.scss',
})
export class TaskForm {
  readonly tasksStore = inject(TasksStore);

  readonly title = signal('');
  readonly error = signal('');

  addTask(): void {
    const success = this.tasksStore.add(this.title());

    if (!success) {
      this.error.set(
        this.title().trim()
          ? 'Досягнуто максимальної кількості задач.'
          : 'Введіть назву задачі.',
      );

      return;
    }

    this.title.set('');
    this.error.set('');
  }
}