#include <stdio.h>
#include <stdlib.h>

void controllo () 
{
    char nome [15];
    int età;
    printf ("Inserisci il tuo nome: ");
    scanf ("%s", nome);
    printf ("Inserisci la tua età: ");
    scanf ("%d", &età);
    if (età >= 18) {
        printf ("%s è maggiorenne. \n", nome);
    }
}

int main () 
{
    controllo ();
    system ("pause");
    return 0;
}