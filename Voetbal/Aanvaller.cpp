//
// Created by romeo on 22-11-2019.
//

#include "Aanvaller.h"
#include "pasActie.h"
#include "schietActie.h"
#include <iostream>

using namespace std;

//CONSTRUCTOR
Aanvaller::Aanvaller() : Speler() {}

Aanvaller::Aanvaller(string naam, int rugnummer) : Speler(naam, rugnummer) {}

//DESTRUCTOR
Aanvaller::~Aanvaller() {}

//GETTERS
int Aanvaller::getAantalDoelpunten() const {
    return aantalDoelpunten;
}

int Aanvaller::getAantalSchotenOpDoel() const {
    return aantalSchotenOpDoel;
}

int Aanvaller::getTotaalAantalSchoten() const {
    return totaalAantalSchoten;
}

//SETTERS
void Aanvaller::addActie(Actie *actie) {
    //voeg toe aan actielijst van speler
    Speler::addActie(actie);
    verwerkActie(actie);
}

void Aanvaller::verwerkActie(Actie *actie) {
    //CASTING
    if (pasActie *ptr_pa = dynamic_cast<pasActie *>(actie)) {
        Speler::pas(); //aantalpassen++
        if (ptr_pa->getToegekomen()) {
            // aanvaller krijgt 20 punten voor een pas die toekomt
            Speler::updatePunten(20);
        } else {
            //aanvaller verliest 8 punten voor pas die niet toekomt
            Speler::updatePunten(-8);
        }
    }
    //SPECIFIEK VOOR MIDDENVELDER
    if (schietActie *ptr_sa = dynamic_cast<schietActie *>(actie)) {
        aantalSchotenOpDoel++;
        totaalAantalSchoten++;
        if (ptr_sa->getOpDoel() && ptr_sa->getGoal()) {
            Speler::updatePunten(40);
        }
        if (ptr_sa->getOpDoel() && !ptr_sa->getGoal()) {
            Speler::updatePunten(+5);
        }
        if (!ptr_sa->getOpDoel() && !ptr_sa->getGoal()) {
            Speler::updatePunten(-20);
        }
        if (!ptr_sa->getOpDoel() && ptr_sa->getGoal()) {
            //een goal terwijl er geen schot op doel is, is een foute input
            aantalSchotenOpDoel--;
        }
    }
}

//OPERATOR
ostream &operator<<(ostream &os, const Aanvaller &aanvaller) {
    os
            << "[Aanvaller: " << aanvaller.getNaam()
            << "|Rugnr: " << aanvaller.getRugnummer()
            << "|afstand : " << aanvaller.getAantalKMGelopen() << "km"
            << "|passen: " << aanvaller.getAantalPassen()
            << "|schoten op doel: " << aanvaller.getAantalSchotenOpDoel()
            << "|totaal schoten: " << aanvaller.getTotaalAantalSchoten()
            << "|goals : " << aanvaller.getAantalDoelpunten() << "]"
            << "[Punten: " << aanvaller.getPunten() << "]"
            << endl;
    return os;
}