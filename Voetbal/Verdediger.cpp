//
// Created by romeo on 22-11-2019.
//

#include "Verdediger.h"
#include "pasActie.h"
#include "tackleActie.h"
#include <iostream>

using namespace std;

//CONSTRUCTOR
Verdediger::Verdediger() : Speler() {}

Verdediger::Verdediger(string naam, int rugnummer) : Speler(naam, rugnummer) {}

//DESTRUCTOR
Verdediger::~Verdediger() {}

//GETTERS
int Verdediger::getAantalTackles() const {
    return aantalTackles;
}

//SETTERS
void Verdediger::addActie(Actie *actie) {
    //voeg toe aan actielijst van speler
    Speler::addActie(actie);
    verwerkActie(actie);
}

void Verdediger::verwerkActie(Actie *actie) {
    //CASTING
    if (pasActie *ptr_pa = dynamic_cast<pasActie *>(actie)) {
        Speler::pas(); //aantalpassen++
        if (ptr_pa->getToegekomen()) {
            // verdediger krijgt 7 punten voor een pas die toekomt
            Speler::updatePunten(7);
        } else {
            //verdediger verliest 4 punten voor pas die niet toekomt
            Speler::updatePunten(-4);
        }
    }
    //SPECIFIEK VOOR VERDEDIGER
    if (tackleActie *ptr_ta = dynamic_cast<tackleActie *>(actie)) {
        aantalTackles++;
        if (ptr_ta->getOvertreding()) {
            // verdediger verlies 10 punten voor een tackle die een overtreding is
            Speler::updatePunten(-10);
        } else {
            // verdediger krijgt 20punten voor een tackle die geen overtreding is
            Speler::updatePunten(20);
        }
    }
}

//OPERATOR
ostream &operator<<(ostream &os, const Verdediger &verdediger) {
    os
            << "[Verdediger: " << verdediger.getNaam()
            << "|Rugnr: " << verdediger.getRugnummer()
            << "|afstand : " << verdediger.getAantalKMGelopen() << "km"
            << "|passen: " << verdediger.getAantalPassen()
            << "|tackles : " << verdediger.getAantalTackles() << "]"
            << "[Punten: " << verdediger.getPunten() << "]"
            << endl;
    return os;

}