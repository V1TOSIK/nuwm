import { InjectionToken } from "@angular/core";

export const SVG_SPRITE_PATH = new InjectionToken<string>('SVG_SPRITE_PATH', {
    factory: () => '/icons/sprite.svg',
});