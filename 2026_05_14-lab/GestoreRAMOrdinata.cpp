#include "GestoreRAMOrdinata.h"
#include <iostream>
#include <cstring>

using namespace std;

GestoreRAMOrdinata::GestoreRAMOrdinata() {
    numContatti = 0;
    
}

bool GestoreRAMOrdinata::inserisci(Contatto c) {
    if (numContatti >= MAX_CONTATTI) return false;
    
    int i = numContatti - 1;
    while (i >= 0 && strcmp(lista[i].getCognome(), c.getCognome()) > 0) {
        lista[i + 1] = lista[i];
        i--;
    }
    lista[i + 1] = c;
    numContatti++;
    return true;
}

int GestoreRAMOrdinata::cerca(const char* cognome) {
    
    int low = 0, high = numContatti - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        int comp = strcmp(lista[mid].getCognome(), cognome);
        if (comp == 0) return mid;
        if (comp < 0) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
