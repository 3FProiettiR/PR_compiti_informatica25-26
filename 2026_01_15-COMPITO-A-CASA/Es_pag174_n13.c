#include <stdio.h>
int main() {
    int n, x;
    printf("Inserisci quanti valori vuoi: ");
    scanf("%d", &n);
    int numeri[n];
    printf("Inserisci il valore iniziale: ");
    scanf("%d", &x);
    numeri[0] = x;
    for(int i = 1; i < n; i++) {
        numeri[i] = numeri[i - 1] * 3;
    }
    for(int i = 0; i < n; i++) {
        printf("%d ", numeri[i]);
    }
    return 0;
}