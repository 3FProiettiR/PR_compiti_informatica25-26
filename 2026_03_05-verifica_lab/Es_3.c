#include <stdio.h>

int ricercaSequenziale(int v[], int n, int x) {
    int i;
    for(i = 0; i < n; i++) {
        if(v[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int v[8] = {5, 12, 7, 9, 12, 3, 8, 1};
    int risultato;
    risultato = ricercaSequenziale(v, 8, 7);
    printf("Ricerca di 7: indice = %d\n", risultato);
    risultato = ricercaSequenziale(v, 8, 12);
    printf("Ricerca di 12: indice = %d\n", risultato);
    risultato = ricercaSequenziale(v, 8, 4);
    printf("Ricerca di 4: indice = %d\n", risultato);
    return 0;
}