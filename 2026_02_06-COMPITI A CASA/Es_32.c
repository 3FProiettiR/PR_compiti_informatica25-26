#include <stdio.h>

int main() {
    int x, prec, count = 1;
    scanf("%d", &prec);
    while (1) {
        scanf("%d", &x);
        if (x == 999) break;
        printf("%d ", x - prec);
        prec = x;
        count++;
    }
    printf("%d\n", count);
    return 0;
}
