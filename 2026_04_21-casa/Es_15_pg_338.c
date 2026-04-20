#include <stdio.h>

int main() {
    int mat[4][5] = {{0,0,0,0,0}, {1,1,2,4,8}, {2,2,4,8,16}, {0,0,0,0,0}};
    int i, j, sommaParziale, ok = 1;

    for(i = 0; i < 4; i++) {
        sommaParziale = mat[i][0];
        for(j = 1; j < 5; j++) {
            if(mat[i][j] != sommaParziale) {
                ok = 0;
            }
            sommaParziale += mat[i][j];
        }
    }

    if(ok) printf("Proprieta' verificata per tutta la matrice.\n");
    else printf("Proprieta' NON verificata.\n");

    return 0;
}