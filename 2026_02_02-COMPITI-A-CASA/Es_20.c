#include <stdio.h>

int main() {
    int n, prod = 0, x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        int temp = 0;
        for (int j = 0; j < x; j++)
            temp += prod;
        prod = temp;
    }
    printf("%d\n", prod);
    return 0;
}
