#include <stdio.h>
#include <stdlib.h>

int main () {
float a, b, c;
printf("Inserisci la lunghezza del primo lato: ");
scanf("%f", &a);
printf("Inserisci la lunghezza del secondo lato: ");
scanf("%f", &b);
printf("Inserisci la lunghezza del terzo lato: ");
scanf("%f", &c);

if (a <= 0 || b <= 0 || c <= 0) {
    printf("I lati devono essere maggiori di 0.\n");
    return 0;
}

if ( (a + b > c) && (a + c > b) && (b + c > a) ) {
    printf("Possono essere le lunghezze di un triangolo.\n");
} else {
    printf("Non possono essere le lunghezze di un triangolo.\n");
}

return 0;
}