import { Component, computed, inject, signal } from '@angular/core';
import { CommonModule } from '@angular/common';

import { CourseLevel } from '@/Lab5/features/courses/models/course.model';
import { COURSES } from '@/Lab5/features/courses/courses.data';
import { RoleService, UserRole } from '@/Lab5/features/roles/services/role.service';

import { HighlightDirective } from '@/Lab5/shared/directives/highlight.directive';
import { LevelDirective } from '@/Lab5/shared/directives/level.directive';
import { HasRoleDirective } from '@/Lab5/shared/directives/has-role.directive';

import { TruncatePipe } from '@/Lab5/shared/pipes/truncate.pipe';
import { PluralPipe } from '@/Lab5/shared/pipes/plural.pipe';

@Component({
  selector: 'app-course-catalog',
  standalone: true,
  imports: [
    CommonModule,
    HighlightDirective,
    LevelDirective,
    HasRoleDirective,
    TruncatePipe,
    PluralPipe,
  ],
  templateUrl: './course-catalog.html',
  styleUrl: './course-catalog.scss',
})
export class CourseCatalog {
  readonly roleService = inject(RoleService);

  readonly courses = signal(COURSES);
  readonly selectedLevel = signal<CourseLevel | 'all'>('all');

  readonly filteredCourses = computed(() => {
    const level = this.selectedLevel();

    if (level === 'all') {
      return this.courses();
    }

    return this.courses().filter(course => course.level === level);
  });

  changeRole(role: UserRole): void {
    this.roleService.currentRole.set(role);
  }
}