#include <stdio.h>

int main() {
    int numero;
    printf("Inserisci un numero: ");
    scanf("%d", &numero);
    while (numero >= 2 && numero <= 20) {
        int multiplo = numero;
        while (multiplo < 100) {
            printf("%d ", multiplo);
            multiplo = multiplo + numero;
        }
        printf("\n");
        printf("Inserisci un numero: ");
        scanf("%d", &numero);
    }
    return 0;
}