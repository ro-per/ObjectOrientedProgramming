//
// Created by romeo on 19-1-2020.
//

#ifndef EX___HUIS_KAMER_H
#define EX___HUIS_KAMER_H

#include <iostream>
#include "Meubel.h"
#include <vector>

using namespace std;

class Kamer {
    vector<Meubel *> meubels;
    int waardeKamer;
    int aantalBedden;
    int aantalStoelen;
    int aantalKasten;
    int kamerNummer;
public:
    //CONSTRUCTOREN_________________________________________________________________________________________________________
    Kamer();

    //DESTRUCTOR____________________________________________________________________________________________________________
    virtual ~Kamer();

    //GETTERS____________________________________________________________________________________________________________
    int getWaardeKamer();

    int getKamerNummer() const;

    int getAantalBedden() const;

    int getAantalStoelen() const;

    int getAantalKasten() const;

    //SETTERS____________________________________________________________________________________________________________
    int setKamerNummer(int mNummer);

    //METHODEN____________________________________________________________________________________________________________
    void voegMeubelToe(Meubel *meubel);

    void verwijderMeubel(Meubel *meubel);

    //PRINTERS____________________________________________________________________________________________________________
    void printBeddenPrijs();

    void printKamer();
};

#endif //EX___HUIS_KAMER_H
