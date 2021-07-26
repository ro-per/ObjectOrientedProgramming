//
// Created by romeo on 19-1-2020.
//


#include "Meubel.h"

//CONSTRUCTOREN_________________________________________________________________________________________________________
Meubel::Meubel() {
    nummerMeubel = 0;
    cout << "Meubel default constructor" << endl;
}

Meubel::Meubel(const Meubel &m) {
    prijsMeubel = m.prijsMeubel;
    nummerMeubel = m.nummerMeubel;
}

//DESTRUCTOR____________________________________________________________________________________________________________
Meubel::~Meubel() {
    cout << "Meubel deleted" << endl;
}

//GETTERS____________________________________________________________________________________________________________
int Meubel::getNummerMeubel() const {
    return nummerMeubel;
}

int Meubel::getPrijsMeubel() const {
    return prijsMeubel;
}

//SETTERS____________________________________________________________________________________________________________
void Meubel::setPrijs(int mPrijs) {
    Meubel::prijsMeubel = mPrijs;
}

void Meubel::setNummer(int mNummer) {
    nummerMeubel = mNummer;
}

//OPERATORS____________________________________________________________________________________________________________
Meubel Meubel::operator=(const Meubel &m) {
    if (this != &m) {
        prijsMeubel = m.prijsMeubel;
        nummerMeubel = m.nummerMeubel;
    }
    return *this;
}

//PRINTERS____________________________________________________________________________________________________________
void Meubel::print() {
    cout << "Meubel" << endl;
}