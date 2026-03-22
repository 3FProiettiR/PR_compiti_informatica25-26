#include <stdio.h>
#include <string.h>

int main() {
    char nomi[10][50];
    int n, i, j;
    char temp[50];
    printf("Quanti nomi? ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Nome %d: ", i+1);
        scanf("%s", nomi[i]);
    }
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-1-i; j++) {
            if(strcmp(nomi[j], nomi[j+1]) > 0) {
                strcpy(temp, nomi[j]);
                strcpy(nomi[j], nomi[j+1]);
                strcpy(nomi[j+1], temp);
            }
        }
    }
    printf("\nPrimo in ordine alfabetico: %s\n", nomi[0]);
    printf("Ultimo in ordine alfabetico: %s\n", nomi[n-1]);
    return 0;
}