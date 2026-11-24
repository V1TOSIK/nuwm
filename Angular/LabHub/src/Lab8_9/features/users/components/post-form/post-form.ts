import { Component, output, signal } from '@angular/core';
import { FormsModule } from '@angular/forms';

import { CreatePostDTO } from '@/Lab8_9/features/users/models/create-post.dto';

@Component({
  selector: 'app-post-form',
  standalone: true,
  imports: [FormsModule],
  templateUrl: './post-form.html',
  styleUrl: './post-form.scss',
})
export class PostFormComponent {
  readonly submitted = output<Omit<CreatePostDTO, 'userId'>>();

  readonly title = signal('');
  readonly body = signal('');

    hasUnsavedChanges(): boolean {
        return !!this.title().trim() || !!this.body().trim();
    }

  submit(): void {
    const title = this.title().trim();
    const body = this.body().trim();

    if (!title || !body) {
      return;
    }

    this.submitted.emit({ title, body });

    this.title.set('');
    this.body.set('');
  }
}