#include <stdio.h>

int main() {
    int eta1, eta2, eta3, maggiore, minore;

    printf("Inserisci l'eta' del primo fratello: ");
    scanf("%d", &eta1);
    printf("Inserisci l'eta' del secondo fratello: ");
    scanf("%d", &eta2);
    printf("Inserisci l'eta' del terzo fratello: ");
    scanf("%d", &eta3);

    maggiore = eta1;
    if (eta2 > maggiore) {
        maggiore = eta2;
    }
    if (eta3 > maggiore) {
        maggiore = eta3;
    }

    minore = eta1;
    if (eta2 < minore) {
        minore = eta2;
    }
    if (eta3 < minore) {
        minore = eta3;
    }

    printf("La differenza di eta' tra il fratello maggiore e quello minore e': %d anni\n", maggiore - minore);
    return 0;
}