#include <stdio.h>
#include <stdlib.h>
#define CostoBN 0.10
#define CostoCol 0.80
#define CostoRil 1.30

void calcolo_spesa () {
    int fotoBN, fotoCOL, fotoTOT;
    float costoTOT, costoBN, costoCOL;
    printf("metti il numero fi fotocopie in bianco e nero che desidere fare:");
    scanf("%d", &fotoBN);
    printf("metti il numero di fotocopie a colori che desidere fare:");
    scanf("%d", &fotoCOL);
    fotoTOT = fotoBN + fotoCOL;
}