#include <stdlib.h>
#include <stdio.h>

void calcolo_diff () {
    int numtot, nmax, nmin, diff, i, y;
    printf("inserisci il numero totale di elementi: ");
    scanf("%d", &numtot);
    if (numtot <= 0) {
        printf("Errore: il numero deve essere positivo.\n");
        return;
    }
    printf("inserisci il 1° numero intero: ");
    scanf("%d", &nmax);
    i=1;
    while (i < numtot) { 
        printf ("inserisci un altro numero intero: ");
        scanf ("%d", &nmin);
        if (nmin > nmax) {
            y = nmax;
            nmax = nmin;
            nmin = y;
        }
        i++;
    }
    printf ("il numero massimo e': %d\n", nmax);
    printf ("il numero minimo e': %d\n", nmin);
    diff = nmax - nmin;
    printf ("la differenza tra massimo e minimo e': %d\n", diff);
}

int main() {
    calcolo_diff();
    return 0;
}

