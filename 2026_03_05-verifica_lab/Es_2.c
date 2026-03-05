#include <stdio.h>

void stampPari(int v[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        if(v[i] % 2 == 0) {
            printf("%d ", v[i]);
        }
    }
    printf("\n");
}

int main() {
    int v1[5] = {1, 2, 3, 4, 5};
    int v2[6] = {10, 15, 20, 7, 8, 9};
    int v3[4] = {11, 12, 13, 14};
    printf("Numeri pari del vettore 1: ");
    stampPari(v1, 5);
    printf("Numeri pari del vettore 2: ");
    stampPari(v2, 6);
    printf("Numeri pari del vettore 3: ");
    stampPari(v3, 4);
    return 0;
}