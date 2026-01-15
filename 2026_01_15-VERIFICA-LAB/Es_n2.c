#include <stdlib.h>
#include <stdio.h>
 int main () {
    int costa, costp, costc, soldimessi, copertura, selezione;
    printf ("ecco i nostri prodotti: \n 1 acqua costo 1 euro \n 2 patatine costo 2 euro \n 3 cioccolata costo 3 euro \n");
    printf ("seleziona il prodotto che vuoi acquistare (1, 2, 3): ");
    scanf ("%d", &selezione);

    switch (selezione) { 
        case 1: 
            costa = 1;
            printf ("quanti soldi inserisci? ");
            scanf ("%d", &soldimessi);
            if (soldimessi >= costa) {
                printf ("ecco il tuo prodotto \n");
            } else  {
                printf ("credito insufficiente \n");
            }
        break;

        case 2: 
            costp = 2;
            printf ("quanti soldi inserisci? ");
            scanf ("%d", &soldimessi);
            if (soldimessi >= costp) {
                printf ("ecco il tuo prodotto \n");
            } else  {
                printf ("credito insufficiente \n");
            }
        break;

        case 3: 
            costc = 3;
            printf ("quanti soldi inserisci? ");
            scanf ("%d", &soldimessi);
            if (soldimessi >= costc) {
                printf ("ecco il tuo prodotto \n");
            } else  {
                printf ("credito insufficiente \n");
            }
        break;

        default:
            printf ("selezione non valida \n");
    }
 }