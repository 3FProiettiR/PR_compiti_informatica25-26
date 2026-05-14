#ifndef CONTATTO_H
#define CONTATTO_H

class Contatto {
private:
    char cognome[50];
    char nome[50];

public:
    Contatto();
    Contatto(const char* c, const char* n);
    const char* getCognome() const;
    const char* getNome() const;
};

#endif