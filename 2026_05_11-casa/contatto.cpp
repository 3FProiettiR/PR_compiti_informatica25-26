#include "contatto.h"
#include <iostream>
#include <cstring>

using namespace std;

Contatto::Contatto() {
    strcpy(this->cognome, "");
    strcpy(this->nome, "");
    strcpy(this->telefono, "");
}

Contatto::Contatto(const char* c, const char* n, const char* t) {
    strncpy(this->cognome, c, 49);
    this->cognome[49] = '\0'; 
    strncpy(this->nome, n, 49);
    this->nome[49] = '\0';
    strncpy(this->telefono, t, 19);
    this->telefono[19] = '\0';
}

const char* Contatto::getCognome() const { return cognome; }
const char* Contatto::getNome() const { return nome; }
const char* Contatto::getTelefono() const { return telefono; }

void Contatto::stampa() const {
    cout << "[" << cognome << " " << nome << " - Tel: " << telefono << "]" << endl;
}

