#include <stdio.h>

int main() {
    int vendite[31], max = 0, giorno = 0;
    double somma = 0;
    for (int i = 0; i < 31; i++) {
        scanf("%d", &vendite[i]);
        somma += vendite[i];
        if (vendite[i] > max) {
            max = vendite[i];
            giorno = i + 1;
        }
    }
    printf("%d\n", giorno);
    printf("%.2f\n", somma / 31);
    printf("%.2f\n", somma / 31);
    return 0;
}