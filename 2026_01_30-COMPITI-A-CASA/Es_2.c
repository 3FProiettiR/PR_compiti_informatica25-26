#include <stdio.h>

int main() {
    int n, i, numero, massimo, somma = 0;
    float percentuale;
    printf("Inserisci quanti numeri vuoi inserire: ");
    scanf("%d", &n);
    printf("Inserisci un numero: ");
    scanf("%d", &numero);
    massimo = numero;
    somma = numero;
    for (i = 1; i < n; i++) {
        printf("Inserisci un numero: ");
        scanf("%d", &numero);

        somma = somma + numero;

        if (numero > massimo) {
            massimo = numero;
        }
    }
    percentuale = (float) massimo * 100 / somma;
    printf("Il massimo e': %d\n", massimo);
    printf("Il massimo rappresenta il %.2f%% del totale\n", percentuale);
    return 0;
}