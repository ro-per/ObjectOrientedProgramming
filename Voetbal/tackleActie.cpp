//
// Created by romeo on 22-11-2019.
//
#include <iostream>
#include "tackleActie.h"

//CONSTRUCTOR
tackleActie::tackleActie() {}

tackleActie::tackleActie(int minuut, bool overtreding) : Actie(minuut) {
    tackleActie::overtreding = overtreding;
}

//DESTRUCTOR
tackleActie::~tackleActie() {}

//GETTERS
bool tackleActie::getOvertreding() {
    return overtreding;
}

//OPERATOR
ostream &operator<<(ostream &os, const tackleActie &tackleActie) {
    os << "tackleActie: " << tackleActie.getMinuut();
    return os;
}