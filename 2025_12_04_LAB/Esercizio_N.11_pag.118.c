#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void risoluzione_equazione_primo_grado () {
    float a, b, x;
    printf ("Inserisci il coefficiente a: ");
    scanf ("%f", &a);
    printf ("Inserisci il coefficiente b: ");
    scanf ("%f", &b);
    if (a!=0) {
        printf ("l'equazione ammette una soluzione.\n");
        x = (b/a) * (-1);
        printf ("La soluzione dell'equazione e': x = %.2f\n", x);
    }
    else {
        if (a==0 && b!=0) {
            printf ("l'equazione non ammette soluzioni.\n");
        }
        else {
            if (a == 0 && b==0)
            printf ("l'equazione ammette infinite soluzioni.\n");
        }
    }
}

int main () {
    risoluzione_equazione_primo_grado ();
    return 0;
}
