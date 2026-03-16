#include <stdio.h>

int main() {
    int N;
    printf("Inserisci la dimensione del vettore: ");
    scanf("%d", &N);
    char v[N];
    for(int i = 0; i < N; i++) {
        printf("Inserisci il carattere %d: ", i);
        scanf(" %c", &v[i]);
    }
    char c;
    int cont = 0;
    printf("Inserisci il carattere da cercare: ");
    scanf(" %c", &c);
    for(int i = 0; i < N; i++) {
        if(v[i] == c) {
            cont++;
        }
    }
    printf("Il carattere %c compare %d volte\n", c, cont);
    return 0;
}