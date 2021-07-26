//
// Created by romeo on 22-11-2019.
//

#include "Middenvelder.h"
#include "pasActie.h"
#include "voorzetActie.h"
#include <iostream>

using namespace std;

//CONSTRUCTOR
Middenvelder::Middenvelder() : Speler() {}

Middenvelder::Middenvelder(string naam, int rugnummer) : Speler(naam, rugnummer) {}

//DESTRUCTOR
Middenvelder::~Middenvelder() {}

//GETTERS
int Middenvelder::getAantalVoorzetten() const {
    return aantalVoorzetten;
}

//SETTERS
void Middenvelder::addActie(Actie *actie) {
    //voeg toe aan actielijst van speler
    Speler::addActie(actie);
    verwerkActie(actie);
}

void Middenvelder::verwerkActie(Actie *actie) {
    //CASTING
    if (pasActie *ptr_pa = dynamic_cast<pasActie *>(actie)) {
        Speler::pas(); //aantalpassen++
        if (ptr_pa->getToegekomen()) {
            // middenvelder krijgt 10 punten voor een pas die toekomt
            Speler::updatePunten(10);
        } else {
            //middenvelder verliest 2 punten voor pas die niet toekomt
            Speler::updatePunten(-2);
        }
    }
    //SPECIFIEK VOOR MIDDENVELDER
    if (voorzetActie *ptr_va = dynamic_cast<voorzetActie *>(actie)) {
        aantalVoorzetten++;
        if (ptr_va->getToegekomen()) {
            // middenvelder krijgt 30 punten voor een voorzet die toekomt
            Speler::updatePunten(30);
        } else {
            // middenvelder verliest 10 punten voor een voorzet die niet toekomt
            Speler::updatePunten(-10);
        }
    }
}

//OPERATOR
ostream &operator<<(ostream &os, const Middenvelder &middenvelder) {
    os
            << "[Middenvelder: " << middenvelder.getNaam()
            << "|Rugnr: " << middenvelder.getRugnummer()
            << "|afstand : " << middenvelder.getAantalKMGelopen() << "km"
            << "|passen: " << middenvelder.getAantalPassen()
            << "|voorzetten : " << middenvelder.getAantalVoorzetten() << "]"
            << "[Punten: " << middenvelder.getPunten() << "]"
            << endl;
    return os;
}