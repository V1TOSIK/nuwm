import { Component, inject } from '@angular/core';
import { DatePipe } from '@angular/common';
import { TasksStore } from '@/Lab7/features/tasks/services/tasks.store';

@Component({
  selector: 'app-task-list',
  standalone: true,
  imports: [DatePipe],
  templateUrl: './task-list.html',
  styleUrl: './task-list.scss',
})
export class TaskList {
  readonly tasksStore = inject(TasksStore);
}