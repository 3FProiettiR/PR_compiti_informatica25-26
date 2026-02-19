#include <stdio.h>

int main() {
    int N, x;
    double somma = 0, media;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &x);
        somma += x;
    }
    media = somma / N;
    printf("%f\n", media);
    return 0;
}
