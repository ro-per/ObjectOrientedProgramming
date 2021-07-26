//
// Created by romeo on 22-11-2019.
//

#ifndef OO_LAB4_VOETBAL_SPELER_H
#define OO_LAB4_VOETBAL_SPELER_H

#include <string>
#include <vector>
#include "Actie.h"

using namespace std;

class Speler {
private:
    vector<Actie *> acties;
    string naam;
    int rugnummer;

    int aantalKMGelopen;
    int aantalPassen;

    int punten;
public:
    //CONSTRUCTOR
    Speler();

    Speler(string naam, int rugnummer);

    //DESTRUCTOR
    virtual ~Speler();

    //GETTERS
    string getNaam() const;

    int getRugnummer() const;

    int getAantalKMGelopen() const;

    int getAantalPassen() const;

    int getPunten() const;

    //SETTERS
    void addActie(Actie *actie);

    void verwerkActie(Actie *actie);

    void updatePunten(int punten);

    void setGelopen(int extra);

    void pas();

    //OPERATOR
    friend ostream &operator<<(ostream &os, const Speler &speler);

};

#endif //OO_LAB4_VOETBAL_SPELER_H
