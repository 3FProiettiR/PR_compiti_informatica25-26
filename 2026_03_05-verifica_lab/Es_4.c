#include <stdio.h>

int contaMaggiori(int v[], int n, int t) {
    int i, cont = 0;
    for(i = 0; i < n; i++) {
        if(v[i] > t) {
            cont++;
        }
    }
    return cont;
}

int main() {
    int v1[5] = {3, 7, 10, 2, 8};
    int v2[6] = {15, 4, 9, 20, 1, 6};
    int v3[4] = {12, 5, 7, 14};
    int t = 7;
    printf("Elementi maggiori di %d nel vettore 1: %d\n", t, contaMaggiori(v1, 5, t));
    printf("Elementi maggiori di %d nel vettore 2: %d\n", t, contaMaggiori(v2, 6, t));
    printf("Elementi maggiori di %d nel vettore 3: %d\n", t, contaMaggiori(v3, 4, t));
    return 0;
}