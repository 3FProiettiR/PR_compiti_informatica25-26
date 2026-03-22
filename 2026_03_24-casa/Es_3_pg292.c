#include <stdio.h>

int main() {
    int v[100], n, i, num, pos = -1;
    printf("Quanti numeri? ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &v[i]);
    }
    printf("Numero da eliminare: ");
    scanf("%d", &num);
    for(i = 0; i < n; i++) {
        if(v[i] == num) {
            pos = i;
            break;
        }
    }
    if(pos != -1) {
        for(i = pos; i < n-1; i++) {
            v[i] = v[i+1];
        }
        n--;

        printf("Vettore dopo eliminazione:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", v[i]);
        }
    } else {
        printf("Numero non trovato\n");
    }
    return 0;
}