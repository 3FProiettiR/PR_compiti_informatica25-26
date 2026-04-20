#include <stdio.h>
#include <string.h>

int main() {
    int N, i, trovato = 0;
    char nomi[30][50]; 
    int voti[30];
    char cerca[50];

    printf("Quanti esami vuoi inserire? (max 30): ");
    scanf("%d", &N);
    
    for(i = 0; i < N; i++) {
        printf("Nome esame %d: ", i + 1);
        scanf("%s", nomi[i]);
        printf("Voto esame %d: ", i + 1);
        scanf("%d", &voti[i]);
    }

    printf("\nInserisci il nome dell'esame da cercare: ");
    scanf("%s", cerca);

    for(i = 0; i < N; i++) {
        if(strcmp(nomi[i], cerca) == 0) {
            printf("Il voto di %s e': %d\n", nomi[i], voti[i]);
            trovato = 1;
            break;
        }
    }

    if(!trovato) printf("Esame non presente in archivio.\n");

    return 0;
}