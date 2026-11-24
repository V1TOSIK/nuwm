import {
  Directive,
  effect,
  inject,
  input,
  TemplateRef,
  ViewContainerRef,
} from '@angular/core';

import {
  RoleService,
  UserRole,
} from '@/Lab5/features/roles/services/role.service';

@Directive({
  selector: '[appHasRole]',
  standalone: true,
})
export class HasRoleDirective {
  readonly appHasRole = input.required<UserRole>();

  private readonly roleService = inject(RoleService);
  private readonly templateRef = inject(TemplateRef);
  private readonly viewContainer = inject(ViewContainerRef);

  private isVisible = false;

  constructor() {
    effect(() => {
      const hasAccess =
        this.roleService.currentRole() === this.appHasRole();

      if (hasAccess && !this.isVisible) {
        this.viewContainer.createEmbeddedView(this.templateRef);
        this.isVisible = true;
      } else if (!hasAccess && this.isVisible) {
        this.viewContainer.clear();
        this.isVisible = false;
      }
    });
  }
}