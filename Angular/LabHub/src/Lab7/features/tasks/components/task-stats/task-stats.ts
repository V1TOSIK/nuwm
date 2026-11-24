import { Component, inject } from '@angular/core';
import { TasksStore } from '@/Lab7/features/tasks/services/tasks.store';

@Component({
  selector: 'app-task-stats',
  standalone: true,
  templateUrl: './task-stats.html',
  styleUrl: './task-stats.scss',
})
export class TaskStats {
  readonly tasksStore = inject(TasksStore);
}