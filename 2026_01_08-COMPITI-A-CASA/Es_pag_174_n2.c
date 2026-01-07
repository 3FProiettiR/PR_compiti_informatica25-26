#include <stdio.h>

int main() {
    printf ("Inserisci quanti numeri vuoi vedere (N>0): ");
    int N;
    scanf("%d", &N);
    if (scanf("%d", &N) != 1) return 1;
    if (N <= 0) {
        printf("Errore: N deve essere > 0\n");
        return 1;
    }

    printf("Primi %d numeri pari:\n", N);
    for (int i = 1; i <= N; ++i) {
        printf("%d", 2 * i);
        if (i < N) printf(" ");
    }
    printf("\n");

    printf("Primi %d numeri dispari:\n", N);
    for (int i = 0; i < N; ++i) {
        printf("%d", 2 * i + 1);
        if (i < N - 1) printf(" ");
    }
    printf("\n");

    return 0;
}