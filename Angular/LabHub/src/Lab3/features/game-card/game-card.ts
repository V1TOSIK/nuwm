import {
    ChangeDetectionStrategy,
    Component,
    input,
    output
} from "@angular/core";
import { CurrencyPipe } from "@angular/common";
import { Game } from "@/Lab3/features/models/Game";
import { Rating } from "@/Lab3/shared/ui/rating/rating";

@Component({
    selector: 'app-game-card',
    imports: [CurrencyPipe, Rating],
    templateUrl: './game-card.html',
    styleUrl: './game-card.scss',
    changeDetection: ChangeDetectionStrategy.OnPush,
})
export class GameCard {
    game = input.required<Game>();
    addToCart = output<Game>();
}