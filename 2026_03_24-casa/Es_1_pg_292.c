#include <stdio.h>
#include <string.h>

int main() {
    char cognomi[10][50];
    int n, i, j;
    char temp[50];
    printf("Quanti cognomi vuoi inserire? ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("Inserisci cognome %d: ", i+1);
        scanf("%s", cognomi[i]);
    }
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-1-i; j++) {
            if(strcmp(cognomi[j], cognomi[j+1]) > 0) {
                strcpy(temp, cognomi[j]);
                strcpy(cognomi[j], cognomi[j+1]);
                strcpy(cognomi[j+1], temp);
            }
        }
    }
    printf("\nCognomi in ordine alfabetico:\n");
    for(i = 0; i < n; i++) {
        printf("%s\n", cognomi[i]);
    }
    return 0;
}