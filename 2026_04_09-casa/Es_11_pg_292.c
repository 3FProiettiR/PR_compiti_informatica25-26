#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    int n, i;
    char cognome[MAX][50];
    char citta[MAX][50];
    char telefono[MAX][20];
    int giorno[MAX];
    int mese[MAX];
    printf("Quante persone vuoi inserire? ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("\nPersona %d\n", i+1);

        printf("Cognome: ");
        scanf("%s", cognome[i]);

        printf("Citta: ");
        scanf("%s", citta[i]);

        printf("Telefono: ");
        scanf("%s", telefono[i]);

        printf("Giorno di nascita: ");
        scanf("%d", &giorno[i]);

        printf("Mese di nascita: ");
        scanf("%d", &mese[i]);
    }
    char cercaCitta[50];
    printf("\nInserisci una citta da cercare: ");
    scanf("%s", cercaCitta);
    printf("\nPersone di %s nate in agosto:\n", cercaCitta);
    for(i = 0; i < n; i++) {
        if(strcmp(citta[i], cercaCitta) == 0 && mese[i] == 8) {
            printf("%s\n", cognome[i]);
        }
    }
    char cercaTel[20];
    printf("\nInserisci un numero di telefono: ");
    scanf("%s", cercaTel);
    for(i = 0; i < n; i++) {
        if(strcmp(telefono[i], cercaTel) == 0) {
            printf("\nDati trovati:\n");
            printf("Cognome: %s\n", cognome[i]);
            printf("Citta: %s\n", citta[i]);
            printf("Telefono: %s\n", telefono[i]);
            printf("Data nascita: %d/%d\n", giorno[i], mese[i]);
        }
    }
    char cercaCognome[50];
    printf("\nInserisci un cognome: ");
    scanf("%s", cercaCognome);
    for(i = 0; i < n; i++) {
        if(strcmp(cognome[i], cercaCognome) == 0) {
            printf("Telefono: %s\n", telefono[i]);
        }
    }
    int g, m;
    printf("\nInserisci giorno corrente: ");
    scanf("%d", &g);
    printf("Inserisci mese corrente: ");
    scanf("%d", &m);
    printf("\nCompleanni di oggi:\n");
    for(i = 0; i < n; i++) {
        if(giorno[i] == g && mese[i] == m) {
            printf("Buon compleanno a %s!\n", cognome[i]);
        }
    }
    return 0;
}