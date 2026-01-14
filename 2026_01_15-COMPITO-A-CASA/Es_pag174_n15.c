#include <stdio.h>

int main() {
    int codice;
    float prezzo;
    float prezzoMax = 0;
    int codiceMax = 0;
    printf("Inserisci il codice del prodotto (0 per terminare): ");
    scanf("%d", &codice);
    while (codice != 0) {
        printf("Inserisci il prezzo del prodotto: ");
        scanf("%f", &prezzo);

        if (prezzo > prezzoMax) {
            prezzoMax = prezzo;
            codiceMax = codice;
        }

        printf("Inserisci il codice del prodotto (0 per terminare): ");
        scanf("%d", &codice);
    }
    if (codiceMax != 0) {
        printf("\nProdotto piu costoso:\n");
        printf("Codice: %d\n", codiceMax);
        printf("Prezzo: %.2f\n", prezzoMax);
    } else {
        printf("\nNessun prodotto inserito.\n");
    }
    return 0;
}