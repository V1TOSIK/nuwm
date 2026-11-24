import { Component } from '@angular/core';
import { ProgresBar } from '../progres-bar/progres-bar';

@Component({
  imports: [ProgresBar],
  selector: 'app-result',
  styleUrl: './result.scss',
  templateUrl: './result.html',
})
export class Result {}
