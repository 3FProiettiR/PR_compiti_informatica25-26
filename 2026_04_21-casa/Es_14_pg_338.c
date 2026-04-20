#include <stdio.h>

int main() {
    int mat[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,1,2,3}, {4,5,6,7}}; 
    int i, j, somma, maxSomma = -1000000; 
    int indice;
    char tipo;

    for(i = 0; i < 4; i++) {
        somma = 0;
        for(j = 0; j < 4; j++) somma += mat[i][j];
        if(somma > maxSomma) {
            maxSomma = somma;
            indice = i;
            tipo = 'R';
        }
    }

    for(j = 0; j < 4; j++) {
        somma = 0;
        for(i = 0; i < 4; i++) somma += mat[i][j];
        if(somma > maxSomma) {
            maxSomma = somma;
            indice = j;
            tipo = 'C';
        }
    }

    printf("La somma piu' alta e' %d nella %s %d\n", maxSomma, (tipo == 'R' ? "riga" : "colonna"), indice);
    return 0;
}