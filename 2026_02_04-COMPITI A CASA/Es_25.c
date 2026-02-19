#include <stdio.h>

int main() {
    int giorni, stipendio = 0;
    scanf("%d", &giorni);
    for (int i = 1; i <= giorni; i++)
        stipendio += 10 * i;
    printf("%d\n", stipendio);
    return 0;
}
