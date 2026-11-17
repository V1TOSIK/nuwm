import { Component, signal } from '@angular/core';

@Component({
  imports: [],
  selector: 'app-progres-bar',
  styleUrl: './progres-bar.scss',
  templateUrl: './progres-bar.html',
})
export class ProgresBar {
  protected progress = signal(0);
  private color: string = 'blue';

  private setProgress(value: number): void {
    this.progress.set(Math.min(100, Math.max(0, value)));
  }

  public increaseProgress(value: number): void {
    this.setProgress(this.progress() + value);
  }

  public decreaseProgress(value: number): void {
    this.setProgress(this.progress() - value);
  }
}
