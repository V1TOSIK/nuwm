import { Component } from '@angular/core';
import { OrderForm } from '@/Lab6/widgets/order-form/order-form';

@Component({
  selector: 'app-lab6-page',
  standalone: true,
  imports: [OrderForm],
  templateUrl: './lab6.page.html',
  styleUrl: './lab6.page.scss',
})
export class Lab6Page {}