//
// Created by romeo on 22-11-2019.
//

#include "Speler.h"
#include "loopActie.h"
#include <iostream>

using namespace std;

//CONSTRUCTOR
Speler::Speler() : naam("No name"), acties() {
    Speler::rugnummer = -1;
    Speler::punten = 0;
    Speler::aantalPassen = 0;
    Speler::aantalKMGelopen = 0;
}

Speler::Speler(string naam, int rugnummer) {
    Speler::naam = naam;
    Speler::rugnummer = abs(rugnummer);
    Speler::punten = 0;
    Speler::aantalPassen = 0;
    Speler::aantalKMGelopen = 0;
}

//DESTRUCTOR
Speler::~Speler() {
    acties.clear();
}

//GETTERS
string Speler::getNaam() const {
    return naam;
}

int Speler::getRugnummer() const {
    return rugnummer;
}

int Speler::getAantalKMGelopen() const {
    return aantalKMGelopen;
}


int Speler::getAantalPassen() const {
    return aantalPassen;
}

int Speler::getPunten() const {
    return punten;
}

//SETTERS
void Speler::addActie(Actie *actie) {
    acties.push_back(actie);
    //CASTING
    verwerkActie(actie);

}

void Speler::verwerkActie(Actie *actie) {
    //CASTING
    if (loopActie *ptr_la = dynamic_cast<loopActie *>(actie)) {
        Speler::setGelopen(ptr_la->getGelopenMeters() * 1); // hoog op
        Speler::updatePunten(ptr_la->getGelopenMeters() * 1);
    }
}

void Speler::updatePunten(int extra) {
    Speler::punten += extra;
}

void Speler::setGelopen(int extra) {
    Speler::aantalKMGelopen += extra;
}

void Speler::pas() {
    Speler::aantalPassen++;
}

//OPERATOR

ostream &operator<<(ostream &os, const Speler &speler) {
    os
            << "[Speler: " << speler.getNaam()
            << "|Rugnr: " << speler.getRugnummer()
            << "|afstand : " << speler.getAantalKMGelopen() << "km"
            << "|passen: " << speler.getAantalPassen() << "]"
            << "[Punten: " << speler.getPunten() << "]"
            << endl;
    return os;
}
