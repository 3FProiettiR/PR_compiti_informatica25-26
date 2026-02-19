#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int a = 1, b = 1, c;
    printf("%d %d ", a, b);
    for (int i = 2; i < N; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}
