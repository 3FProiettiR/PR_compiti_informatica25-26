#include <stdio.h>
int main() {
    FILE *fp;
    float peso, altezza;
    float rapporto;
    float K;
    int contatore = 0;
    fp = fopen("Persone.txt", "r");
    if (fp == NULL) {
        printf("Errore nell'apertura del file.\n");
        return 1;
    }
    printf("Inserisci il valore di K: ");
    scanf("%f", &K);
    while (fscanf(fp, "%f %f", &peso, &altezza) != EOF) {
        rapporto = peso / altezza;

        if (rapporto > K) {
            contatore++;
        }
    }
    fclose(fp);
    printf("Numero di persone con rapporto peso/altezza maggiore di K: %d\n", contatore);
    return 0;
}