#ifndef GESTORE_MIRRORED_RAM_H
#define GESTORE_MIRRORED_RAM_H

#include "GestoreRAMOrdinata.h"

class GestoreMirroredRAM : public GestoreRAMOrdinata {
private:
    char nomeFile[100];
    void caricaDaFile();
    void salvaSuFile();

public:
    GestoreMirroredRAM(const char* nomeF);
    ~GestoreMirroredRAM(); 
};

#endif