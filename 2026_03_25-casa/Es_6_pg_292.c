#include <stdio.h>
#include <string.h>

#define MAX 100
int main() {
    char squadre[MAX][30];
    char serie[MAX];
    int punti[MAX];
    int n, i;
    printf("Numero squadre: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("Nome squadra: ");
        scanf("%s", squadre[i]);

        printf("Serie (A/B): ");
        scanf(" %c", &serie[i]);

        printf("Punti: ");
        scanf("%d", &punti[i]);
    }
    printf("\nSquadre di serie A:\n");
    for(i = 0; i < n; i++) {
        if(serie[i] == 'A') {
            printf("%s - %d punti\n", squadre[i], punti[i]);
        }
    }
    char classif[MAX][30];
    int k = 0;
    for(i = 0; i < n; i++) {
        if(serie[i] == 'B') {
            strcpy(classif[k], squadre[i]);
            k++;
        }
    }
    printf("\nSquadre serie B (CLASSIF):\n");
    for(i = 0; i < k; i++) {
        printf("%s\n", classif[i]);
    }
    int max = -1;
    int indice = -1;
    for(i = 0; i < n; i++) {
        if(serie[i] == 'A' && punti[i] > max) {
            max = punti[i];
            indice = i;
        }
    }
    if(indice != -1) {
        printf("\nCampione serie A: %s\n", squadre[indice]);
    }
    return 0;
}