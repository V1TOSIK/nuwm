import { ChangeDetectionStrategy, Component, inject, input } from "@angular/core";
import { SVG_SPRITE_PATH } from "./sprite-path";

@Component({
    selector: 'app-icon',
    templateUrl: './icon.html',
    styleUrl: './icon.scss',
    changeDetection: ChangeDetectionStrategy.OnPush,
})
export class Icon {
    protected spritePath = inject(SVG_SPRITE_PATH);
    name = input.required<string>();
    viewBox = input('0 0 24 24');
    fill = input('none');
    stroke = input('currentColor');
}