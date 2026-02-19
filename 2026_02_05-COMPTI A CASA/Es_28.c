#include <stdio.h>

int main() {
    int a = 3;
    while (1) {
        printf("%d ", a);
        a = 2 * a + 1;
        if (a > 0) break;
    }
    return 0;
}
