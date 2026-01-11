#include <stdio.h>

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) {
        printf("Input non valido\n");
        return 1;
    }
    if (N <= 0) {
        printf("N deve essere > 0\n");
        return 1;
    }

    double a, b;
    double maxSum = 0.0;
    double resA = 0.0, resB = 0.0;

    for (int i = 0; i < N; ++i) {
        if (scanf("%lf %lf", &a, &b) != 2) {
            printf("Input non valido per la coppia %d\n", i + 1);
            return 1;
        }
        double sum = a + b;
        if (i == 0 || sum > maxSum) {
            maxSum = sum;
            resA = a;
            resB = b;
        }
    }

    printf("Coppia con media maggiore: %.6g %.6g (media = %.6g)\n", resA, resB, (resA + resB) / 2.0);
    return 0;
}
