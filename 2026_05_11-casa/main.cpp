#include <iostream>
#include "gestorecontatti.h"

using namespace std;

int main() {
    GestoreContatti agenda;
    agenda.inizializza10Contatti();

    int scelta;
    char bufferCognome[50], bufferNome[50], bufferTel[20];

    do {
        cout << "\n--- GESTORE CONTATTI STEP 50 ---" << endl;
        cout << "1. Visualizza tutti" << endl;
        cout << "2. Cerca (Ricerca Binaria)" << endl;
        cout << "3. Inserisci (Mantenendo ordine)" << endl;
        cout << "4. Elimina" << endl;
        cout << "0. Esci" << endl;
        cout << "Scelta: ";
        cin >> scelta;

        switch(scelta) {
            case 1:
                agenda.stampaTutti();
                break;
            case 2:
                cout << "Cognome da cercare: ";
                cin >> bufferCognome;
                agenda.cercaEStampa(bufferCognome);
                break;
            case 3:
                cout << "Cognome: "; cin >> bufferCognome;
                cout << "Nome: "; cin >> bufferNome;
                cout << "Tel: "; cin >> bufferTel;
                if(agenda.inserisci(Contatto(bufferCognome, bufferNome, bufferTel)))
                    cout << "Inserito con successo." << endl;
                else cout << "Errore: agenda piena." << endl;
                break;
            case 4:
                cout << "Cognome da eliminare: ";
                cin >> bufferCognome;
                if(agenda.elimina(bufferCognome)) cout << "Eliminato." << endl;
                else cout << "Non trovato." << endl;
                break;
        }
    } while (scelta != 0);

    return 0;
}