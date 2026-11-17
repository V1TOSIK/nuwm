import { Component, signal } from '@angular/core';
import { RouterOutlet } from '@angular/router';
import { Header } from './core/layout/header/header';
import { MenuPage } from './features/menu/pages/menu-page/menu-page';
import { ProgresBar } from './shared/ui/progres-bar/progres-bar';

@Component({
  imports: [RouterOutlet, Header, MenuPage, ProgresBar],
  selector: 'app-root',
  templateUrl: './app.html',
})
export class App {
  protected readonly title = signal('lab1');
}
