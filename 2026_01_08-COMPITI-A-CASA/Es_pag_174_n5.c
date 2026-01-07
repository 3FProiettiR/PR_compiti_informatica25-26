#include <stdio.h>

int main() {
    int X, Y;
    if (scanf("%d %d", &X, &Y) != 2) return 1;
    if (X <= 0) {
        printf("Errore: X deve essere > 0\n");
        return 1;
    }

    int sum = 0;
    for (int k = 1; k <= X; ++k) {
        int v = Y + k;
        sum += v * v;
    }

    printf("%d\n", sum);
    return 0;
}
