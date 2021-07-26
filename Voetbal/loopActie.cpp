//
// Created by romeo on 22-11-2019.
//
#include <string>
#include "loopActie.h"

#include <iostream>

using namespace std;

//CONSTRUCTOR
loopActie::loopActie() {}

loopActie::loopActie(int minuut, int meters) : Actie(minuut) {
    loopActie::gelopenMeters = meters;
}

//DESTRUCTOR
loopActie::~loopActie() {}

//GETTERS
int loopActie::getGelopenMeters() {
    return gelopenMeters;
}

//OPERATOR
ostream &operator<<(ostream &os, const loopActie &loopActie) {
    os << "loopActie: " << loopActie.getMinuut() << "|" << loopActie.gelopenMeters;
    return os;
};
