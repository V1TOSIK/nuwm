import { ChangeDetectionStrategy, Component, computed, input, model } from "@angular/core";
import { Icon } from "../icon/icon";

@Component({
    imports: [Icon],
    selector: 'app-rating',
    templateUrl: './rating.html',
    styleUrl: './rating.scss',
    changeDetection: ChangeDetectionStrategy.OnPush,
})

export class Rating {
    maxCount = input(5);
    value = model(0); // двостороння прив'язка
    readonly = input(false);
    protected stars = computed(() =>
        Array.from({ length: this.maxCount() }, (_, i) => i)
    );
    
    rate(v: number) {
        if (!this.readonly()) this.value.set(v);
    }
}