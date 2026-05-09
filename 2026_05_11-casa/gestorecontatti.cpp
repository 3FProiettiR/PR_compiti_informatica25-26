#include "gestorecontatti.h"
#include <iostream>
#include <cstring>

using namespace std;

GestoreContatti::GestoreContatti() {
    numContatti = 0;
}

void GestoreContatti::inizializza10Contatti() {
    
    inserisci(Contatto("Rossi", "Mario", "011"));
    inserisci(Contatto("Bianchi", "Luca", "022"));
    inserisci(Contatto("Verdi", "Anna", "033"));
    inserisci(Contatto("Bruni", "Paola", "044"));
    inserisci(Contatto("Neri", "Marco", "055"));
    inserisci(Contatto("Gialli", "Sara", "066"));
    inserisci(Contatto("Russo", "Gennaro", "077"));
    inserisci(Contatto("Romano", "Ciro", "088"));
    inserisci(Contatto("Ferrari", "Enzo", "099"));
    inserisci(Contatto("Esposito", "Luigi", "100"));
}

int GestoreContatti::ricercaBinaria(const char* cognomeCercato) const {
    int basso = 0;
    int alto = numContatti - 1;
    
    while (basso <= alto) {
        int medio = (basso + alto) / 2;
        int comp = strcmp(rubrica[medio].getCognome(), cognomeCercato);
        
        if (comp == 0) return medio;  
        if (comp < 0) basso = medio + 1;
        else alto = medio - 1;
    }
    return -1;   
}

bool GestoreContatti::inserisci(const Contatto& c) {
    if (numContatti >= MAX_CONTATTI) return false;

    
    int i = numContatti - 1;
    while (i >= 0 && strcmp(rubrica[i].getCognome(), c.getCognome()) > 0) {
        rubrica[i + 1] = rubrica[i]; 
        i--;
    }
    rubrica[i + 1] = c;
    numContatti++;
    return true;
}

bool GestoreContatti::elimina(const char* cognomeCercato) {
    int pos = ricercaBinaria(cognomeCercato);
    if (pos == -1) return false;

    for (int i = pos; i < numContatti - 1; i++) {
        rubrica[i] = rubrica[i + 1];
    }
    numContatti--;
    return true;
}

void GestoreContatti::cercaEStampa(const char* cognomeCercato) const {
    int pos = ricercaBinaria(cognomeCercato);
    if (pos != -1) {
        cout << "Trovato: ";
        rubrica[pos].stampa();
    } else {
        cout << "Contatto non presente." << endl;
    }
}

void GestoreContatti::stampaTutti() const {
    for (int i = 0; i < numContatti; i++) {
        rubrica[i].stampa();
    }
}