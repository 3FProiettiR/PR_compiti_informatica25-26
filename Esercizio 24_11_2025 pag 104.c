#include <stdio.h>
#include <stdlib.h>

void operazioni () 
{
    float n1, n2, ris;
    char operatore;
    printf ("Inserisci il primo numero: ");
    scanf ("%f", &n1);
    printf ("Inserisci il secondo numero: ");
    scanf ("%f", &n2);
    printf ("inserisci l'operatore ");
    scanf (" %s", &operatore);
    switch (operatore) {
        case '+':
            ris = n1 + n2;
            printf ("La somma è: %.2f \n", ris);
            break;
        case '-':
            ris = n1 - n2;
            printf ("La sottrazione è: %.2f \n", ris);
            break;
        case '*':
            ris = n1 * n2;
            printf ("La moltiplicazione è: %.2f \n", ris);
            break;
        case '/':
            if (n2 != 0) {
                ris = n1 / n2;
                printf ("La divisione è: %.2f \n", ris);
            } else {
                printf ("Errore: divisione per zero. \n");
            }
            break;
        default:
            printf ("Operatore non esistente. \n");
    }
}

int main () 
{
    operazioni ();
    system ("pause");
    return 0;
}