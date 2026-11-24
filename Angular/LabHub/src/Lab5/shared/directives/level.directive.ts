import { Directive, computed, input } from '@angular/core';
import { CourseLevel } from '@/Lab5/features/courses/models/course.model';

@Directive({
  selector: '[appLevel]',
  standalone: true,
  host: {
    '[style.border-left]': 'borderStyle()',
  },
})
export class LevelDirective {
  readonly appLevel = input.required<CourseLevel>();

  readonly borderStyle = computed(() => {
    const colors: Record<CourseLevel, string> = {
      beginner: '5px solid green',
      intermediate: '5px solid orange',
      advanced: '5px solid red',
    };

    return colors[this.appLevel()];
  });
}