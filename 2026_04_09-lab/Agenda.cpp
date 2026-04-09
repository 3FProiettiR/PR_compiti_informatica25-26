#include <iostream>
#include <string>

using namespace std;

struct contatto {
    string nome;
    string cognome;
    string telefono;
};

int main () {
    const int DIM=10;
    contatto agenda [DIM];

    string fintiNomi[DIM] = {"Mario", "Luigi", "Anna", "Paola", "Marco", "Giulia", "Luca", "Sara", "Elena", "Davide"};
    string fintiCognomi[DIM] = {"Rossi", "Verdi", "Bianchi", "Neri", "Gialli", "Marrone", "Blu", "Viola", "Rosa", "Gallo"};
    string fintiTelefoni[DIM] = {"333111111", "333222222", "333333333", "333444444", "333555555", "333666666", "333777777", "333888888", "333999999", "333000000"};

    for(int i=0; i<DIM; i++){
        agenda[i].nome = fintiNomi[i];
        agenda[i].cognome = fintiCognomi[i];
        agenda[i].telefono = fintiTelefoni[i];
    }
    cout << "    Agenda inizializzata con 10 contatti    \n";

    string nomeCercato;
    cout << "inserisci il nome da cercare: ";
    cin >> nomeCercato;

    bool trovato=false;

    
    for(int i = 0; i < DIM; i++) {
        if(agenda[i].nome == nomeCercato) {
            cout << "\nContatto trovato!" << endl;
            cout << "Nome: " << agenda[i].nome << endl;
            cout << "Cognome: " << agenda[i].cognome << endl;
            cout << "Telefono: " << agenda[i].telefono << endl;
            
            trovato = true;
            break; 
        }
    }

    
    if(!trovato) {
        cout << "\nNessun contatto trovato con questo nome." << endl;
    }

    return 0;
}