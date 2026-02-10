#include <stdio.h>

int main() {
    int N, tessera, tesseraMin;
    double spesa, incasso = 0, minSpesa;
    FILE *f = fopen("Clienti.txt", "r");

    scanf("%d", &N);
    fscanf(f, "%d %lf", &tessera, &spesa);
    incasso += spesa;
    minSpesa = spesa;
    tesseraMin = tessera;

    for (int i = 1; i < N; i++) {
        fscanf(f, "%d %lf", &tessera, &spesa);
        incasso += spesa;
        if (spesa < minSpesa) {
            minSpesa = spesa;
            tesseraMin = tessera;
        }
    }

    printf("%.2f\n", incasso);
    printf("%d\n", tesseraMin);
    fclose(f);
    return 0;
}
