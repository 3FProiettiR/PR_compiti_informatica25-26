#ifndef CONTATTO_H
#define CONTATTO_H

class Contatto {
private:
    char cognome[50];
    char nome[50];
    char telefono[20];

public:
    Contatto();
    
    Contatto(const char* c, const char* n, const char* t);
    
    const char* getCognome() const;
    const char* getNome() const;
    const char* getTelefono() const;
    
    void stampa() const;
};

#endif