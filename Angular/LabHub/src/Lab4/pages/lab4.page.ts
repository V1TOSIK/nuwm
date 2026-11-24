
import { Component } from '@angular/core';

import { ExampleComponent } from "@/Lab4/widgets/example/example.component";

@Component({
  selector: 'app-lab4-page',
  standalone: true,
  imports: [ExampleComponent],
  templateUrl: './lab4.page.html',
  styleUrl: './lab4.page.scss',
})
export class Lab4Page {}
