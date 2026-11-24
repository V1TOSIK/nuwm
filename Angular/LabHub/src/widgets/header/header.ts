import { Component } from "@angular/core";
import { RouterLink } from "@angular/router";
import { LABS } from "@/shared/config/navigation-items";


@Component({
    imports: [RouterLink], 
    selector: "app-header",
    templateUrl: "./header.html",
    styleUrls: ["./header.scss"]
})

export class HeaderComponent {
    readonly labs = LABS;
}