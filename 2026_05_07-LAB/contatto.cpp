#include <iostream>
#include <cstring>

using namespace std;

#include "contatto.h"


Contatto::Contatto()
{
    strcpy(nome, "");
    strcpy(cognome, "");
    strcpy(telefono, "");
}


Contatto::Contatto(const char n[],
                   const char c[],
                   const char t[])
{
    strcpy(nome, n);
    strcpy(cognome, c);
    strcpy(telefono, t);
}


void Contatto::setNome(const char n[])
{
    strcpy(nome, n);
}

void Contatto::setCognome(const char c[])
{
    strcpy(cognome, c);
}

void Contatto::setTelefono(const char t[])
{
    strcpy(telefono, t);
}


const char* Contatto::getNome() const
{
    return nome;
}

const char* Contatto::getCognome() const
{
    return cognome;
}

const char* Contatto::getTelefono() const
{
    return telefono;
}


void Contatto::stampa() const
{
    cout << cognome << " "
         << nome << " - "
         << telefono << endl;
}