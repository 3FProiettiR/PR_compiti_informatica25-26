#include <stdio.h>

int main() {
    int N, K;
    int maggiore = 0, minore = 0, uguale = 0;
    printf("Inserisci quanti numeri vuoi inserire: ");
    scanf("%d", &N);
    int numeri[N];
    printf("Inserisci il valore di K: ");
    scanf("%d", &K);
    for(int i = 0; i < N; i++) {
        printf("Inserisci il numero %d: ", i + 1);
        scanf("%d", &numeri[i]);
    }
    for(int i = 0; i < N; i++) {
        if(numeri[i] > K) {
            maggiore++;
        } else if(numeri[i] < K) {
            minore++;
        } else {
            uguale++;
        }
    }
    printf("\nNumeri maggiori di K: %d", maggiore);
    printf("\nNumeri minori di K: %d", minore);
    printf("\nNumeri uguali a K: %d\n", uguale);
    return 0;
}