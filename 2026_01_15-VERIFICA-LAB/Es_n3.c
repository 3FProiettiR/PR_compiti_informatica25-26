#include <stdlib.h>
#include <stdio.h>

int main () {
    int num, somma;
    somma = 0;
    do {
        printf ("inserisci un numero (0 per terminare): ");
        scanf ("%d", &num);
        somma = somma + num;
    } while (num != 0);
    printf ("la somma dei numeri inseriti è: %d\n", somma);
}