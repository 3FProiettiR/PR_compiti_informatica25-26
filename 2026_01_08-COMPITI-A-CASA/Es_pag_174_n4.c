#include <stdio.h>

int main() {
    int limit;
    printf("Inserisci il numero massimo di inserimenti (>0): ");
    if (scanf("%d", &limit) != 1) return 1;
    if (limit <= 0) {
        printf("Errore: il limite deve essere > 0\n");
        return 1;
    }

    int x;
    for (int i = 1; i <= limit; ++i) {
        printf("Inserisci un numero (%d/%d): ", i, limit);
        if (scanf("%d", &x) != 1) return 1;
        if (x % 7 == 0) {
            printf("Successo: sono stati inseriti %d numeri\n", i);
            return 0;
        }
    }

    printf("Fallimento: non è stato inserito alcun numero divisibile per 7 entro %d inserimenti\n", limit);
    return 0;
}