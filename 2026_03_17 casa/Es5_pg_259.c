#include <stdio.h>

int main() {
    int N;
    printf("Inserisci la dimensione dei vettori: ");
    scanf("%d", &N);
    int v1[N], v2[N], somma[N];
    printf("Inserisci gli elementi del primo vettore:\n");
    for(int i = 0; i < N; i++) {
        printf("v1[%d]: ", i);
        scanf("%d", &v1[i]);
    }
    printf("Inserisci gli elementi del secondo vettore:\n");
    for(int i = 0; i < N; i++) {
        printf("v2[%d]: ", i);
        scanf("%d", &v2[i]);
    }
    for(int i = 0; i < N; i++) {
        somma[i] = v1[i] + v2[i];
    }
    printf("Vettore somma:\n");
    for(int i = 0; i < N; i++) {
        printf("%d ", somma[i]);
    }
    return 0;
}