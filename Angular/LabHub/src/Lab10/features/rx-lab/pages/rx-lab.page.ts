
import { Component } from '@angular/core';

import { CitySearchComponent } from '../components/city-search/city-search';
import { BookingComponent } from '../components/booking/booking';
import { NoteEditorComponent } from '../components/note-editor/note-editor';

@Component({
  selector: 'app-rx-lab-page',
  standalone: true,
  imports: [
    CitySearchComponent,
    BookingComponent,
    NoteEditorComponent,
  ],
  templateUrl: './rx-lab.page.html',
  styleUrl: './rx-lab.page.scss',
})
export class RxLabPage {}
