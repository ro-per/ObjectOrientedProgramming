//
// Created by romeo on 22-11-2019.
//

#include "Keeper.h"
#include "loopActie.h"
#include "pasActie.h"
#include "vangActie.h"

#include <iostream>

using namespace std;

//CONSTRUCTOR
Keeper::Keeper() : Speler() {}

Keeper::Keeper(string naam, int rugnummer) : Speler(naam, rugnummer) {}

//DESTRUCTOR
Keeper::~Keeper() {}

//GETTERS
int Keeper::getAantalBallenGevangen() const {
    return aantalBallenGevangen;
}

//SETTERS
void Keeper::addActie(Actie *actie) {
    //voeg toe aan actielijst van speler
    Speler::addActie(actie);
    verwerkActie(actie);
}

void Keeper::verwerkActie(Actie *actie) {
    //CASTING
    if (pasActie *ptr_pa = dynamic_cast<pasActie *>(actie)) {
        Speler::pas(); //aantalpassen++
        if (ptr_pa->getToegekomen()) {
            // keeper krijgt 5 punten voor een pas die toekomt
            Speler::updatePunten(5);
        } else {
            //keeper verliest 3 punten voor pas die niet toekomt
            Speler::updatePunten(-3);
        }
    }
    //SPECIFIEK VOOR KEEPER
    if (vangActie *ptr_va = dynamic_cast<vangActie *>(actie)) {
        if (ptr_va->getGevangen()) {
            aantalBallenGevangen++;
            Speler::updatePunten(8);
        } else {
            Speler::updatePunten(-20);
        }
    }
}


//OPERATOR
ostream &operator<<(ostream &os, const Keeper &keeper) {
    os
            << "[Keeper: " << keeper.getNaam()
            << "|Rugnr: " << keeper.getRugnummer()
            << "|afstand : " << keeper.getAantalKMGelopen() << "km"
            << "|passen: " << keeper.getAantalPassen()
            << "|ballen : " << keeper.getAantalBallenGevangen() << "]"
            << "[Punten: " << keeper.getPunten() << "]"
            << endl;
    return os;
}