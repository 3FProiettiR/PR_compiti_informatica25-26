#include <stdio.h>

int main() {
    int N, x;
    int voti = 0, nulli = 0, bianche = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &x);
        if (x > 0) voti++;
        else if (x == 0) nulli++;
        else bianche++;
    }
    printf("%.2f\n", (double)voti / N * 100);
    printf("%.2f\n", (double)bianche / N * 100);
    printf("%d\n", nulli);
    return 0;
}
