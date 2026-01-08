#include <stdio.h>
#include <stdlib.h>

int main () {
    int N, M;
    printf("inserisci un numero intero positivo N: ");
    scanf("%d", &N);    
    printf("inserisci un numero intero positivo M: ");
    scanf("%d", &M);

    for (int i=0 ; i<N ; i++) {
        for (int j=0 ; j<M ; j++) {
            printf("*");
        }
        printf("\n");
    }
}