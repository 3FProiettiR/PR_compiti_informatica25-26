#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a, b, x;
    do {
        scanf("%d %d", &a, &b);
    } while (a >= b);

    srand(time(NULL));
    do {
        x = rand();
        printf("%d\n", x);
    } while (x >= a && x <= b);

    return 0;
}
