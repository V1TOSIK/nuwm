import {
  AbstractControl,
  AsyncValidatorFn,
  FormArray,
  FormBuilder,
  FormControl,
  FormGroup,
  ReactiveFormsModule,
  Validators,
} from '@angular/forms';

import {
  Component,
  computed,
  inject,
  signal,
} from '@angular/core';

import { CommonModule } from '@angular/common';
import { startWith, map, tap, of } from 'rxjs';
import { toSignal } from '@angular/core/rxjs-interop';

import { Product } from '@/Lab6/features/order/models/product.model';
import { PRODUCTS } from '@/Lab6/features/order/order.data';
import { PromoService } from '@/Lab6/features/order/promo.service';
import { minItemsValidator } from '@/Lab6/shared/validators/min-items.validator';

type OrderItemForm = FormGroup<{
  productId: FormControl<number | null>;
  quantity: FormControl<number>;
}>;

@Component({
  selector: 'app-order-form',
  standalone: true,
  imports: [CommonModule, ReactiveFormsModule],
  templateUrl: './order-form.html',
  styleUrl: './order-form.scss',
})
export class OrderForm {
  private readonly fb = inject(FormBuilder);
  private readonly promoService = inject(PromoService);

  readonly products = PRODUCTS;

  readonly promoDiscount = signal(0);
  readonly submitted = signal(false);

  readonly errorMessages: Record<string, string> = {
    required: 'Це поле обов’язкове.',
    minlength: 'Мінімальна довжина — 3 символи.',
    pattern: 'Неправильний формат номера. Приклад: +380XXXXXXXXX.',
    email: 'Введіть коректну електронну адресу.',
    min: 'Мінімальне значення — 1.',
    max: 'Максимальне значення — 10.',
    promoInvalid: 'Промокод недійсний.',
    minItems: 'Замовлення повинно містити хоча б один товар.',
  };

  private readonly promoValidator: AsyncValidatorFn = (control) => {
    const code = String(control.value ?? '').trim();

    if (!code) {
      this.promoDiscount.set(0);
      return of(null);
    }

    return this.promoService.check(code).pipe(
      tap(discount => this.promoDiscount.set(discount ?? 0)),
      map(discount =>
        discount === null ? { promoInvalid: true } : null,
      ),
    );
  };

  readonly form = this.fb.group({
    contact: this.fb.group({
      fullName: ['', [Validators.required, Validators.minLength(3)]],
      phone: ['', [Validators.required, Validators.pattern(/^\+380\d{9}$/)]],
      email: ['', [Validators.required, Validators.email]],
    }),

    delivery: this.fb.control<'pickup' | 'courier'>('pickup'),

    address: this.fb.group({
      city: [''],
      street: [''],
    }),

    items: this.fb.array<OrderItemForm>(
      [this.createItem()],
      { validators: [minItemsValidator] },
    ),

    promoCode: this.fb.control('', {
      asyncValidators: [this.promoValidator],
      updateOn: 'blur',
    }),
  });

  readonly items = this.form.controls.items;

  private readonly itemsValue = toSignal(
    this.items.valueChanges.pipe(
      startWith(this.items.getRawValue()),
    ),
    {
      initialValue: this.items.getRawValue(),
    },
  );

  readonly subtotal = computed(() => {
  return this.itemsValue().reduce((total, item) => {
    const product = this.products.find(p => p.id === item.productId);

    return total + (product?.price ?? 0) * (item.quantity ?? 0);
  }, 0);
});

  readonly discountAmount = computed(
    () => this.subtotal() * this.promoDiscount(),
  );

  readonly total = computed(
    () => this.subtotal() - this.discountAmount(),
  );

  constructor() {
    // Початково самовивіз, тому адреса одразу вимкнена.
    this.form.controls.address.disable();

    this.form.controls.delivery.valueChanges.subscribe(delivery => {
      const address = this.form.controls.address;
      const city = address.controls.city;
      const street = address.controls.street;

      if (delivery === 'courier') {
        address.enable();

        city.setValidators([Validators.required]);
        street.setValidators([Validators.required]);
      } else {
        city.clearValidators();
        street.clearValidators();

        address.reset({
          city: '',
          street: '',
        });

        address.disable();
      }

      city.updateValueAndValidity();
      street.updateValueAndValidity();
    });
  }

  private createItem(): OrderItemForm {
    return this.fb.group({
      productId: this.fb.control<number | null>(
        null,
        Validators.required,
      ),

      quantity: this.fb.nonNullable.control(1, [
        Validators.required,
        Validators.min(1),
        Validators.max(10),
      ]),
    });
  }

  addItem(): void {
    this.items.push(this.createItem());
  }

  removeItem(index: number): void {
    if (this.items.length > 1) {
      this.items.removeAt(index);
    }
  }

  getProductPrice(productId: number | null): number {
    return this.products.find(p => p.id === productId)?.price ?? 0;
  }

  getErrorMessage(control: AbstractControl | null): string {
    if (!control?.errors) {
      return '';
    }

    const errorKey = Object.keys(control.errors)[0];

    return this.errorMessages[errorKey] ?? 'Некоректне значення.';
  }

  submit(): void {
    if (this.form.invalid || this.form.pending) {
      this.form.markAllAsTouched();
      return;
    }

    console.log('Order:', this.form.getRawValue());

    this.submitted.set(true);

    this.resetForm();
  }

  private resetForm(): void {
    this.items.clear();
    this.items.push(this.createItem());

    this.form.reset({
      contact: {
        fullName: '',
        phone: '',
        email: '',
      },
      delivery: 'pickup',
      address: {
        city: '',
        street: '',
      },
      promoCode: '',
    });

    this.form.controls.address.disable();

    this.promoDiscount.set(0);
  }
}