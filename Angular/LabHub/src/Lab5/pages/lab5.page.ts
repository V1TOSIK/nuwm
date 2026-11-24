import { Component } from '@angular/core';
import { CourseCatalog } from '@/Lab5/widgets/course-catalog/course-catalog';

@Component({
  selector: 'app-lab5-page',
  standalone: true,
  imports: [CourseCatalog],
  templateUrl: './lab5.page.html',
  styleUrl: './lab5.page.scss',
})
export class Lab5Page {}