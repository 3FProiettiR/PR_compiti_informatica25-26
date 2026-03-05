#include <stdio.h>

void stampaNonVallate(int v[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        if(i == 0 || i == n-1) {
            printf("%d ", v[i]);
        }
        else {
            if(!(v[i] < v[i-1] && v[i] < v[i+1])) {
                printf("%d ", v[i]);
            }
        }
    }
    printf("\n");
}

int main() {
    int v1[5] = {5, 2, 7, 1, 6};
    int v2[6] = {10, 3, 8, 2, 9, 4};
    int v3[4] = {4, 1, 5, 2};
    printf("Elementi non vallate v1: ");
    stampaNonVallate(v1, 5);
    printf("Elementi non vallate v2: ");
    stampaNonVallate(v2, 6);
    printf("Elementi non vallate v3: ");
    stampaNonVallate(v3, 4);
    return 0;
}