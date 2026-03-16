#include <stdio.h>

int main() {
    int N;
    printf("Inserisci il numero di premi: ");
    scanf("%d", &N);
    float v[N];
    for(int i = 0; i < N; i++) {
        printf("Inserisci il premio %d: ", i);
        scanf("%f", &v[i]);
    }
    float min, max;
    printf("Inserisci il valore minimo: ");
    scanf("%f", &min);
    printf("Inserisci il valore massimo: ");
    scanf("%f", &max);
    printf("Premi compresi tra %.2f e %.2f:\n", min, max);
    for(int i = 0; i < N; i++) {
        if(v[i] >= min && v[i] <= max) {
            printf("%.2f ", v[i]);
        }
    }
    return 0;
}