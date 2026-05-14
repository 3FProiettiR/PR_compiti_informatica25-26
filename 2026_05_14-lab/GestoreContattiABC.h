#ifndef GESTORE_CONTATTI_ABC_H
#define GESTORE_CONTATTI_ABC_H

#include "contatto.h"

class GestoreContattiABC {
public:
    virtual ~GestoreContattiABC() {}

    virtual bool inserisci(Contatto c) = 0;
    virtual int cerca(const char* cognome) = 0;
    virtual bool elimina(const char* cognome) = 0;
    virtual void stampaTutti() = 0;
};

#endif