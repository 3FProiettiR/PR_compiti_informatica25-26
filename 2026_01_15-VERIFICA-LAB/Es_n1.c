#include <stdlib.h>
#include <stdio.h>

int main () {
    int voto;
    printf("inserisci punteggio ottenuto: ");
    scanf("%d", &voto);
    if (voto < 0 || voto > 100){
        printf ("Errore: voto non valido\n");
        return 0;
    }
    if (voto>= 0 && voto<= 49) {
        printf("il voto che hai preso è insufficiente \n");
    } else  {
        if (voto>= 50 && voto<= 69) {
            printf ("il voto che hai preso è sufficiente \n");
        } else {
            if (voto >= 70 && voto <= 89) {
                printf ("il voto che hai preso è buono \n");
            } else {
                if (voto >= 90 && voto <=100) {
                    printf ("il voto che hai preso è eccellente \n");
                }
            }
        }
    }
}
