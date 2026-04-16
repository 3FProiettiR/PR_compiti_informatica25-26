#include <stdio.h>

int main() {
    int N = 5;
    int matrice[5][5];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j % 2 != 0) {
                matrice[i][j] = 1;
            } else {
                matrice[i][j] = 0;
            }
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }
    return 0;
}