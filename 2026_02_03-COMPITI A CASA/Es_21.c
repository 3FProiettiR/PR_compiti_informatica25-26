#include <stdio.h>

int main() {
    int a, b, coppie = 0, inserimenti = 0;
    while (1) {
        scanf("%d %d", &a, &b);
        inserimenti++;
        if (a == b || b > a) break;
        coppie++;
    }
    printf("%d\n%d\n", inserimenti, coppie);
    return 0;
}
