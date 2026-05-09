#ifndef GESTORECONTATTI_H
#define GESTORECONTATTI_H

#include "contatto.h"

const int MAX_CONTATTI = 100;

class GestoreContatti {
private:
    Contatto rubrica[MAX_CONTATTI]; 
    int numContatti;

    
    int ricercaBinaria(const char* cognomeCercato) const;

public:
    GestoreContatti();
    
    void inizializza10Contatti(); 
    
    bool inserisci(const Contatto& c);
    bool elimina(const char* cognomeCercato);
    void cercaEStampa(const char* cognomeCercato) const;
    void stampaTutti() const;
};

#endif