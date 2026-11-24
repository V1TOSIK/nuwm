import { Component, inject } from '@angular/core';

import { APP_CONFIG } from '@/Lab7/core/config/app-config';

import { TaskForm } from '@/Lab7/features/tasks/components/task-form/task-form';
import { TaskList } from '@/Lab7/features/tasks/components/task-list/task-list';
import { TaskStats } from '@/Lab7/features/tasks/components/task-stats/task-stats';

import { SharedCounter } from '@/Lab7/widgets/shared-counter/shared-counter';
import { IsolatedCounter } from '@/Lab7/widgets/isolated-counter/isolated-counter';

@Component({
  selector: 'app-lab7-page',
  standalone: true,
  imports: [
    TaskForm,
    TaskList,
    TaskStats,
    SharedCounter,
    IsolatedCounter,
  ],
  templateUrl: './lab7.page.html',
  styleUrl: './lab7.page.scss',
})
export class Lab7Page {
  readonly config = inject(APP_CONFIG);
}