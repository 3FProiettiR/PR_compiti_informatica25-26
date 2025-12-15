#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void calcolo_guadagno () {
    char nome_giornale1[30];
    char nome_giornale2[30];
    char nome_giornale3[30];
    int copie_vendute1, copie_vendute2, copie_vendute3, copie_totali;
    float guadagno;
    printf ("Inserisci il nome del primo giornale: ");
    scanf ("%s", nome_giornale1);
    printf ("Inserisci il numero di copie vendute del primo giornale: ");
    scanf ("%d", &copie_vendute1);
    printf ("Inserisci il nome del secondo giornale: ");
    scanf ("%s", nome_giornale2);
    printf ("Inserisci il numero di copie vendute del secondo giornale: ");
    scanf ("%d", &copie_vendute2);
    printf ("Inserisci il nome del terzo giornale: ");
    scanf ("%s", nome_giornale3);
    printf ("Inserisci il numero di copie vendute del terzo giornale: ");
    scanf ("%d", &copie_vendute3);
    if (copie_vendute1 >copie_vendute2 && copie_vendute1 > copie_vendute3) {
        printf ("Il giornale che ha venduto piu' copie e': %s\n", nome_giornale1);
    } else if (copie_vendute2 > copie_vendute1 && copie_vendute2 > copie_vendute3) {
        printf ("Il giornale che ha venduto piu' copie e': %s\n", nome_giornale2);
    } else if (copie_vendute3 > copie_vendute1 && copie_vendute3 > copie_vendute2) {
        printf ("Il giornale che ha venduto piu' copie e': %s\n", nome_giornale3);
    } else {
        printf ("Due o piu' giornali hanno venduto lo stesso numero di copie.\n");
    }
    copie_totali = copie_vendute1 + copie_vendute2 + copie_vendute3;
    if (copie_totali<= 200) {
        guadagno = copie_totali * 0.10;
    }
    else if (copie_totali>200 && copie_totali<=300) {
        guadagno = copie_totali * 0.20;
    }
    else if (copie_totali>=300) {
        guadagno = copie_totali * 0.30;
    }
    printf ("Il guadagno totale e': %.2f euro\n", guadagno);
}

int main() {
    calcolo_guadagno();
    return 0;
}

