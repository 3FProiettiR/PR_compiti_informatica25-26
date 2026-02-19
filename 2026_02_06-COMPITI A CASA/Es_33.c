#include <stdio.h>

int main() {
    int N, M, abitanti, tot = 0;
    scanf("%d %d", &N, &M);
    for (int i = 0; i < M; i++) {
        abitanti = 0;
        for (int j = 0; j < N; j++) {
            int x;
            scanf("%d", &x);
            abitanti += x;
        }
        printf("%d\n", abitanti);
        tot += abitanti;
    }
    printf("%d\n", tot);
    return 0;
}
