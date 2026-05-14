#include "GestoreRAMOrdinata.h"

int main() {
    GestoreContattiABC* rubrica = new GestoreRAMOrdinata();
    
    Contatto nuovo("Rossi", "Mario");
    rubrica->inserisci(nuovo);
    
    int pos = rubrica->cerca("Rossi");
    if(pos != -1) {
        cout << "Trovato!";
    }

    rubrica->stampaTutti();

    delete rubrica;
    return 0;
}