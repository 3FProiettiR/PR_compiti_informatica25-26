#include <stdio.h>
#include <stdlib.h>

void elenco_mezzi () {
    int eta;

    printf ("inserisci la tua eta': ");
    scanf ("%d", &eta);

    if (eta >= 14 ) {
        printf ("l'utente puo' guidare i seguenti veicoli: \n ");
        printf ("scooter con cilindrata di 50 cc \n ");
        if (eta >= 16) {
            printf ("moto fino a 125cc \n");
            if (eta >= 18 ){
                printf ("auto fino a 95 cavalli \n");
                if (eta >= 21){
                    printf ("qualsiasi auto o moto senza limitazioni \n");
                }
            }
        }
    } else {
        printf ("l'utente non puo' ancora guidare nessun veicolo \n");
    }   
}

int main () {
    elenco_mezzi ();
    return 0;
}
