#include <stdio.h>
#include <stdlib.h>

int main () {
    int N;
    printf ("inserisci un numero intero positivo N: ");
    scanf ("%d", &N);
    if (N <= 0) {
        printf ("Errore: il numero deve essere positivo.\n");
        return 1;
    }
    int numeri[N];
    for (int i=0 ; i<N ; i++) {
        printf ("inserisci il 1° numero intero: ", i+1);
        scanf ("%d", &numeri[i]);
    }
}