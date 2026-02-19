#include <stdio.h>

int main() {
    int N, x;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &x);
        if (x % 2 != 0)
            printf("%d ", x);
    }
    return 0;
}
