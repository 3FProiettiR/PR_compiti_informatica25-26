#include <stdio.h>

int main() {
    FILE *f = fopen("numeri.txt", "r");
    int x;
    int sommaPari = 0, cntPari = 0;
    int sommaDispari = 0, cntDispari = 0;
    int maxPos = -2147483648;
    int minNeg = 2147483647;

    while (fscanf(f, "%d", &x) != EOF) {
        if (x % 2 == 0) {
            sommaPari += x;
            cntPari++;
        } else {
            sommaDispari += x;
            cntDispari++;
        }
        if (x > 0 && x > maxPos) maxPos = x;
        if (x < 0 && x < minNeg) minNeg = x;
    }

    printf("%.2f\n", (double)sommaDispari / cntDispari);
    printf("%.2f\n", (double)sommaPari / cntPari);
    printf("%d\n", maxPos);
    printf("%d\n", minNeg);

    fclose(f);
    return 0;
}
