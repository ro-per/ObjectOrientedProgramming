//
// Created by romeo on 22-11-2019.
//

#include "vangActie.h"
#include <iostream>

//CONSTRUCTOR
vangActie::vangActie() : Actie() {
    vangActie::gevangen = false;
}

vangActie::vangActie(int minuut, bool gevangen) : Actie(minuut) {
    vangActie::gevangen = gevangen;
}

//DESTRUCTOR
vangActie::~vangActie() {}

//GETTERS
bool vangActie::getGevangen() {
    return gevangen;
}

//OPERATOR
ostream &operator<<(ostream &os, const vangActie &vangActie) {
    os << "vangActie: " << vangActie.getMinuut();
    return os;
}