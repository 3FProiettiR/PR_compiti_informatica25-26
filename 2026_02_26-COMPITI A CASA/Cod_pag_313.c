#include <stdio.h>
#include <stdlib.h>

#define N 4

void stampa(int m[N][N]);
void trasposta(int m[N][N], int t[N][N]);
int sommaDiagonale(int m[N][N]);

int main() {

    int mat[N][N] = {
        {1, 3, 4, 5},
        {6, 57, 8, 9},
        {10, 11, 12, 13},
        {3, 5, 6, 9}
    };

    int matT[N][N];
    int scelta;
    int risultato;

    do {
        printf("\n--- MENU ---\n");
        printf("1 - Somma diagonale principale\n");
        printf("2 - Matrice trasposta\n");
        printf("0 - Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);

        if (scelta == 1) {
            risultato = sommaDiagonale(mat);
            printf("La somma della diagonale principale e': %d\n", risultato);
        }
        else if (scelta == 2) {
            trasposta(mat, matT);

            printf("\nMatrice originale:\n");
            stampa(mat);

            printf("\nMatrice trasposta:\n");
            stampa(matT);
        }

    } while (scelta != 0);

    printf("Programma finito!\n");
    return 0;
}

void stampa(int m[N][N]) {
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

void trasposta(int m[N][N], int t[N][N]) {
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            t[j][i] = m[i][j];
        }
    }
}

int sommaDiagonale(int m[N][N]) {
    int i;
    int somma = 0;

    for (i = 0; i < N; i++) {
        somma = somma + m[i][i];
    }

    return somma;
}