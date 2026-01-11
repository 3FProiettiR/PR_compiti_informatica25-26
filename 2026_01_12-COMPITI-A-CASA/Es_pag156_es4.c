#include <stdlib.h>
#include <stdio.h>

void calcolo_voti () {
    int numtot,i;
    float nmax, nmin, y;
    printf("inserisci il numero totale di voti: ");
    scanf("%d", &numtot);
    if (numtot <= 0) {
        printf("Errore: il voto deve essere positivo.\n");
        return;
    }
    printf("inserisci il 1° voto: ");
    scanf("%f", &nmax);
    i=1;
    while (i < numtot) { 
        printf ("inserisci un altro voto: ");
        scanf ("%f", &nmin);
        if (nmin > nmax) {
            y = nmax;
            nmax = nmin;
            nmin = y;
        }
        i++;
    }
    printf ("il voto massimo e': %.1f\n", nmax);
    printf ("il voto minimo e': %.1f\n", nmin);
}

int main() {
    calcolo_voti();
    return 0;
}


