#include <iostream>
#include <cstring>

using namespace std;

#include "contatto.h"

const int MAX = 100;


void inserisciOrdinato(Contatto rubrica[],
                       int &n,
                       Contatto nuovo);

int ricercaBinaria(Contatto rubrica[],
                   int n,
                   const char cognome[]);


int main()
{
    Contatto rubrica[MAX];

    int n = 0;


    inserisciOrdinato(rubrica, n,
        Contatto("Mario", "Rossi", "111111"));

    inserisciOrdinato(rubrica, n,
        Contatto("Luca", "Bianchi", "222222"));

    inserisciOrdinato(rubrica, n,
        Contatto("Anna", "Verdi", "333333"));

    inserisciOrdinato(rubrica, n,
        Contatto("Paolo", "Neri", "444444"));


    cout << "RUBRICA" << endl;
    cout << "--------" << endl;

    for(int i = 0; i < n; i++)
    {
        rubrica[i].stampa();
    }


    char cerca[50];

    cout << endl;
    cout << "Inserisci cognome da cercare: ";

    cin >> cerca;

    int posizione;

    posizione = ricercaBinaria(rubrica, n, cerca);


    cout << endl;

    if(posizione != -1)
    {
        cout << "Contatto trovato:" << endl;

        rubrica[posizione].stampa();
    }
    else
    {
        cout << "Contatto non trovato" << endl;
    }

    return 0;
}



void inserisciOrdinato(Contatto rubrica[],
                       int &n,
                       Contatto nuovo)
{
    int i;

    i = n - 1;

    while(i >= 0 &&
          strcmp(nuovo.getCognome(),
                 rubrica[i].getCognome()) < 0)
    {
        rubrica[i + 1] = rubrica[i];

        i--;
    }

    rubrica[i + 1] = nuovo;

    n++;
}



int ricercaBinaria(Contatto rubrica[],
                   int n,
                   const char cognome[])
{
    int sinistra;
    int destra;
    int centro;
    int confronto;

    sinistra = 0;
    destra = n - 1;

    while(sinistra <= destra)
    {
        centro = (sinistra + destra) / 2;

        confronto =
            strcmp(cognome,
                   rubrica[centro].getCognome());

        if(confronto == 0)
        {
            return centro;
        }

        if(confronto < 0)
        {
            destra = centro - 1;
        }
        else
        {
            sinistra = centro + 1;
        }
    }

    return -1;
}