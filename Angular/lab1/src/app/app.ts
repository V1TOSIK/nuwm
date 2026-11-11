import { Component, signal } from '@angular/core';
import { RouterOutlet } from '@angular/router';
import { Header } from './core/layout/header/header';
import { MenuPage } from './features/menu/pages/menu-page/menu-page';

@Component({
  imports: [RouterOutlet, Header, MenuPage],
  selector: 'app-root',
  templateUrl: './app.html',
})
export class App {
  protected readonly title = signal('lab1');
}
