#include <stdio.h>

int main() {
    int N, x, prec;
    scanf("%d %d", &N, &prec);
    for (int i = 1; i < N; i++) {
        scanf("%d", &x);
        if (x > prec)
            printf("%d ", x);
        prec = x;
    }
    return 0;
}
