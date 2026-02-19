#include <stdio.h>

int main() {
    int a, b, somma = 0;
    scanf("%d %d", &a, &b);
    for (int i = 0; i < b; i++)
        somma += a;
    printf("%d\n", somma);
    return 0;
}
