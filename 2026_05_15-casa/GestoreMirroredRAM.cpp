#include "GestoreMirroredRAM.h"
#include <fstream>
#include <iostream>
#include <cstring>

using namespace std;

GestoreMirroredRAM::GestoreMirroredRAM(const char* nomeF) : GestoreRAMOrdinata() {
    strncpy(nomeFile, nomeF, 99);
    
    ifstream f(nomeFile);
    if (!f) {
        
        cout << "File non trovato. Creazione contatti iniziali..." << endl;
        inserisci(Contatto("Rossi", "Mario"));
        inserisci(Contatto("Verdi", "Luigi"));
        inserisci(Contatto("Bianchi", "Anna"));
        
        salvaSuFile();
    } else {
        f.close();
        caricaDaFile();
    }
}

GestoreMirroredRAM::~GestoreMirroredRAM() {
    salvaSuFile();
}

void GestoreMirroredRAM::salvaSuFile() {
    ofstream f(nomeFile);
    if (f) {
        for (int i = 0; i < numContatti; i++) {
            f << lista[i].getCognome() << " " << lista[i].getNome() << endl;
        }
        f.close();
    }
}

void GestoreMirroredRAM::caricaDaFile() {
    ifstream f(nomeFile);
    char cognome[50], nome[50];
    
    while (f >> cognome >> nome) {
        Contatto c(cognome, nome);
        inserisci(c); 
    }
    f.close();
}