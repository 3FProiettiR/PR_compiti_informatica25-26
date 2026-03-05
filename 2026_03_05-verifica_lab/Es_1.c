#include <stdio.h>

int somma(int n) {
    if (n == 0) {      
        return 0;
    } else {  
        return n + somma(n - 1);
    }
}

int main() {
    int n;
    printf("Inserisci n: ");
    scanf("%d", &n);
    printf("La somma dei primi %d numeri e': %d\n", n, somma(n));
    return 0;
}