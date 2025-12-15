#include <stdio.h>
#include <stdlib.h>

int main () {
    float n1, n2, somma1, somma2, somma_pc;
    printf ("Inserisci un numero: ");
    scanf ("%f", &n1);
    printf ("Inserisci un altro numero: ");
    scanf ("%f", &n2);
    printf ("La somma dei due numeri e': ");
    scanf ("%f", &somma1);
    somma_pc = n1 + n2;
    if (somma1 == somma_pc) {
        printf ("bravo hai indovinato al primo tentatio\n");
    } else {
        printf ("hai sbagliato, prova ancora\n");
        printf ("Riprova, inserisci la somma dei due numeri: ");
    scanf ("%f", &somma2);
    if (somma2 == somma_pc) {
        printf ("bravino hai indovinato al secondo tentatio\n");
    } else {
        printf ("ti serve un ripasso in matematica, la somma corretta e': %.2f\n", somma_pc);
    }
    } 
    
}
