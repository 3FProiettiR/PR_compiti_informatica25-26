#include <stdio.h>
#define PI 3.1415926535

int main() {
    for (int r = 1; r <= 20; r++) {
        double circonferenza = 2.0 * PI * r;
        double area = PI * r * r;
        printf("r = %2d: circonferenza = %.3f, area = %.3f\n", r, circonferenza, area);
    }
    return 0;
}