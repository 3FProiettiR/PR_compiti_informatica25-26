#include "GestoreMirroredRAM.h"
#include <iostream>

using namespace std;

int main() {
    
    GestoreContattiABC* rubrica = new GestoreMirroredRAM("rubrica.txt");

    int scelta;
    do {
        cout << "\n--- RUBRICA STEP 70 ---" << endl;
        cout << "1. Inserisci" << endl;
        cout << "2. Cerca" << endl;
        cout << "3. Elimina" << endl;
        cout << "4. Stampa Tutto" << endl;
        cout << "0. Esci (e salva)" << endl;
        cout << "Scelta: ";
        cin >> scelta;

        if (scelta == 1) {
            char c[50], n[50];
            cout << "Cognome: "; cin >> c;
            cout << "Nome: "; cin >> n;
            rubrica->inserisci(Contatto(c, n));
        } else if (scelta == 4) {
            rubrica->stampaTutti();
        }
      

    } while (scelta != 0);

    delete rubrica;
    return 0;
}