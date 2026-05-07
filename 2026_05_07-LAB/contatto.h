#ifndef CONTATTO_H
#define CONTATTO_H

class Contatto
{
private:

    char nome[50];
    char cognome[50];
    char telefono[50];

public:

    Contatto();

    Contatto(const char n[],
              const char c[],
              const char t[]);

    void setNome(const char n[]);
    void setCognome(const char c[]);
    void setTelefono(const char t[]);

    const char* getNome() const;
    const char* getCognome() const;
    const char* getTelefono() const;

    void stampa() const;
};

#endif