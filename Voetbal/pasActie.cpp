//
// Created by romeo on 22-11-2019.
//

#include "pasActie.h"
#include <iostream>

using namespace std;

//CONSTRUCTOR
pasActie::pasActie() {}

pasActie::pasActie(int minuut, bool toegekomen) : Actie(minuut) {
    pasActie::toegekomen = toegekomen;
}

//DESTRUCTOR
pasActie::~pasActie() {}

//GETTERS
bool pasActie::getToegekomen() {
    return toegekomen;
}

//OPERATOR
ostream &operator<<(ostream &os, const pasActie &pasActie) {
    os << "pasActie: " << pasActie.getMinuut();
    return os;
};