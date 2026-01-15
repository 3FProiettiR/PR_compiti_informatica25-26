#include <stdlib.h>
#include <stdio.h>

int main () {
    int temp, giorni;
    giorni = 5;
    for (int i = 1; i <= giorni; i++) {
        printf ("inserisci la temperatura del giorno %d: ", i);
        scanf ("%d", &temp);
        if (temp < 0) {
            if (temp < -10) {
                printf ("Gelo Polare \n");
            } else {
                printf ("Freddo \n");
            }
        } else {
            if (temp > 30) {
                printf ("Caldo torrido \n");
            } else {
                printf ("Caldo normale \n");
            }
        }
    }
}