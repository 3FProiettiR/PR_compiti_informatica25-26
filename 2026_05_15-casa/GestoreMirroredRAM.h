#ifndef GESTORE_MIRRORED_RAM_H
#define GESTORE_MIRRORED_RAM_H

#include "GestoreRAMOrdinata.h"
#include <fstream>

class GestoreMirroredRAM : public GestoreRAMOrdinata {
private:
    char nomeFile[50];
    
    void caricaDaFile();
    void salvaSuFile();

public:
    GestoreMirroredRAM(const char* file);
    ~GestoreMirroredRAM();
};

#endif
