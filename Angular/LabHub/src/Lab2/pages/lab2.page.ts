import { Component } from "@angular/core";
import { Result } from "../shared/ui/result/result";
import { ProgresBar } from "../shared/ui/progres-bar/progres-bar";

@Component({
  selector: 'app-lab1-page',
  standalone: true,
  imports: [Result, ProgresBar],
  templateUrl: './lab2.page.html',
  styleUrl: './lab2.page.scss',
})

export class Lab2Page {}