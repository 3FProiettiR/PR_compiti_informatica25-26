#include <stdio.h>

int main() {
    float vendite[5];
    float totale = 0;

    // Input dei dati
    for (int i = 0; i < 5; i++) {
        printf("Inserisci le vendite del reparto %d: ", i + 1);
        scanf("%f", &vendite[i]);
        totale += vendite[i]; // Sommiamo man mano al totale
    }

    printf("\n--- Report Vendite ---\n");
    printf("Totale incassato: %.2f Euro\n\n", totale);

    // Calcolo e visualizzazione
    for (int i = 0; i < 5; i++) {
        float percentuale = (vendite[i] / totale) * 100;
        printf("Reparto %d: %.2f Euro (%.2f%%)\n", i + 1, vendite[i], percentuale);
    }

    return 0;
}