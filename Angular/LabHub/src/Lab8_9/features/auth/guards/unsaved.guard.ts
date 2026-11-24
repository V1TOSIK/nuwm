import { CanDeactivateFn } from '@angular/router';

import { UserPage } from '@/Lab8_9/features/users/pages/user.page';

export const unsavedGuard: CanDeactivateFn<UserPage> = component => {
  if (!component.hasUnsavedChanges()) {
    return true;
  }

  return confirm(
    'У вас є незбережені зміни. Ви дійсно хочете залишити сторінку?',
  );
};