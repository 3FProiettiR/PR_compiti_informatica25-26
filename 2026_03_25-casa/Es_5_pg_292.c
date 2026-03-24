#include <stdio.h>

#define MAX 100
int main() {
    int v[MAX], n, x, i, pos;
    printf("Quanti numeri? ");
    scanf("%d", &n);
    printf("Inserisci numeri in ordine crescente:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    printf("Numero da inserire: ");
    scanf("%d", &x);
    pos = 0;
    while(pos < n && v[pos] < x) {
        pos++;
    }
    for(i = n; i > pos; i--) {
        v[i] = v[i-1];
    }
    v[pos] = x;
    n++;
    printf("Vettore finale:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    return 0;
}