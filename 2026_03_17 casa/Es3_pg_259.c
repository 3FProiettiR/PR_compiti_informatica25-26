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
    int ordinato = 1;
    for(int i = 1; i < N; i++) {
        if(v[i] <= v[i-1]) {
            ordinato = 0;
        }
    }
    if(ordinato == 1) {
        printf("Il vettore è ordinato\n");
    } else {
        printf("Il vettore NON è ordinato\n");
    }
    return 0;
}