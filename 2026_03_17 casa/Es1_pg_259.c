#include <stdio.h>

int main() {
    int N;
    printf("Inserisci la dimensione del vettore: ");
    scanf("%d", &N);
    int v[N];
    for(int i = 0; i < N; i++) {
        printf("Inserisci l'elemento %d: ", i);
        scanf("%d", &v[i]);
    }
    int indice;
    printf("Inserisci l'indice da raddoppiare (-1 per terminare): ");
    scanf("%d", &indice);
    while(indice != -1) {
        if(indice >= 0 && indice < N) {
            v[indice] = v[indice] * 2;
        } else {
            printf("Indice non valido\n");
        }

        printf("Inserisci un altro indice (-1 per terminare): ");
        scanf("%d", &indice);
    }
    printf("Vettore finale:\n");
    for(int i = 0; i < N; i++) {
        printf("%d ", v[i]);
    }
    return 0;
}