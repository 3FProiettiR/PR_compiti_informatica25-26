#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    printf("inserisci un numero intero positivo N: ");
    scanf("%d", &N);
    if (N <= 0) {
        printf("Errore: il numero deve essere positivo.\n");
        return 1;
    }
    int numeri[N];
    printf("inserisci il 1° numero intero: ");
    scanf("%d", &numeri[0]);
    for (int i = 1; i < N; i++) {
        numeri[i] = 2 * numeri[i - 1];
    }
    printf("Sequenza: ");
    for (int i = 0; i < N; i++) {
        printf("%d", numeri[i]);
        if (i < N - 1) printf(" ");
    }
    printf("\n");
    return 0;
}
