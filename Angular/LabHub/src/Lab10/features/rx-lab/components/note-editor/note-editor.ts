
import { Component, DestroyRef, inject, signal } from '@angular/core';
import { takeUntilDestroyed } from '@angular/core/rxjs-interop';
import { FormBuilder, ReactiveFormsModule, Validators } from '@angular/forms';
import { DatePipe } from '@angular/common';
import {
  concatMap,
  debounceTime,
  filter,
  map,
  tap,
} from 'rxjs';

import { NotesService } from '../../services/fake-api';

@Component({
  selector: 'app-note-editor',
  standalone: true,
  imports: [ReactiveFormsModule, DatePipe],
  templateUrl: './note-editor.html',
  styleUrl: './note-editor.scss',
})
export class NoteEditorComponent {
  private readonly fb = inject(FormBuilder);
  private readonly notesService = inject(NotesService);
  private readonly destroyRef = inject(DestroyRef);

  readonly status = signal<'idle' | 'saving' | 'saved'>('idle');
  readonly savedAt = signal<Date | null>(null);

  readonly form = this.fb.nonNullable.group({
  title: ['', Validators.required],
  text: [''],
});

  constructor() {

    this.form.valueChanges.pipe(
      debounceTime(1000),

      filter(() => this.form.valid),

      map(() => this.form.getRawValue()),

      tap(() => this.status.set('saving')),

      concatMap(note =>
        this.notesService.saveDraft(note).pipe(
          tap(date => {
            this.savedAt.set(date);
            this.status.set('saved');
          }),
        ),
      ),

      takeUntilDestroyed(this.destroyRef),
    ).subscribe();
  }
}
