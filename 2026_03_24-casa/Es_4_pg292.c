#include <stdio.h>
#include <string.h>

int main() {
    char cf[10][20], cf_sotto[10][20];
    float stipendi[10], somma = 0, media;
    int n, i, j = 0;
    printf("Numero dipendenti: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("Codice fiscale %d: ", i+1);
        scanf("%s", cf[i]);

        printf("Stipendio %d: ", i+1);
        scanf("%f", &stipendi[i]);

        somma += stipendi[i];
    }
    media = somma / n;
    for(i = 0; i < n; i++) {
        if(stipendi[i] < media) {
            strcpy(cf_sotto[j], cf[i]);
            j++;
        }
    }
    char temp[20];
    int k;
    for(i = 0; i < j-1; i++) {
        for(k = 0; k < j-1-i; k++) {
            if(strcmp(cf_sotto[k], cf_sotto[k+1]) > 0) {
                strcpy(temp, cf_sotto[k]);
                strcpy(cf_sotto[k], cf_sotto[k+1]);
                strcpy(cf_sotto[k+1], temp);
            }
        }
    }
    printf("\nMedia stipendi: %.2f\n", media);
    printf("Codici fiscali sotto la media:\n");
    for(i = 0; i < j; i++) {
        printf("%s\n", cf_sotto[i]);
    }
    return 0;
}