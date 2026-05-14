#ifndef GESTORE_RAM_ORDINATA_H
#define GESTORE_RAM_ORDINATA_H

#include "GestoreContattiABC.h"

class GestoreRAMOrdinata : public GestoreContattiABC {
private:
    static const int MAX_CONTATTI = 100;
    Contatto lista[MAX_CONTATTI];
    int numContatti;

    int ricercaBinaria(const char* cognome);

public:
    GestoreRAMOrdinata();
    
    bool inserisci(Contatto c) override;
    int cerca(const char* cognome) override;
    bool elimina(const char* cognome) override;
    void stampaTutti() override;
};

#endif