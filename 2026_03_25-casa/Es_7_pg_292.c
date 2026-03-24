#include <stdio.h>
#include <string.h>

#define MAX 100
int main() {
    char titolo[MAX][50];
    char regista[MAX][50];
    float incasso[MAX];
    int n, i;
    printf("Numero film: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("Titolo: ");
        scanf("%s", titolo[i]);

        printf("Regista: ");
        scanf("%s", regista[i]);

        printf("Incasso: ");
        scanf("%f", &incasso[i]);
    }
    char cerca[50];
    printf("\nInserisci regista da cercare: ");
    scanf("%s", cerca);
    printf("Film di %s:\n", cerca);
    for(i = 0; i < n; i++) {
        if(strcmp(regista[i], cerca) == 0) {
            printf("%s\n", titolo[i]);
        }
    }
    int max = 0;
    for(i = 1; i < n; i++) {
        if(incasso[i] > incasso[max]) {
            max = i;
        }
    }
    printf("\nFilm con maggiore incasso:\n");
    printf("%s - %s\n", titolo[max], regista[max]);
    float somma = 0;
    int count = 0;
    for(i = 0; i < n; i++) {
        if(strcmp(regista[i], cerca) == 0) {
            somma += incasso[i];
            count++;
        }
    }
    if(count > 0) {
        printf("Media incassi: %.2f\n", somma / count);
    } else {
        printf("Nessun film trovato\n");
    }
    return 0;
}