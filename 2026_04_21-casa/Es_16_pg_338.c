#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int mat[4][4], i, j;
    int conteggi[4] = {0,0,0,0};
    int uguali = 1;

    srand(time(NULL)); 

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            mat[i][j] = rand() % 2;
            printf("%d ", mat[i][j]);
            if(mat[i][j] == 1) conteggi[i]++;
        }
        printf(" -> 1 totali: %d\n", conteggi[i]);
    }

    for(i = 1; i < 4; i++) {
        if(conteggi[i] != conteggi[i-1]) {
            uguali = 0;
            break;
        }
    }

    if(uguali) printf("\nOgni riga ha lo stesso numero di 'uno' della precedente.\n");
    else printf("\nIl numero di 'uno' varia tra le righe.\n");

    return 0;
}