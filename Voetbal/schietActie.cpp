//
// Created by romeo on 22-11-2019.
//

#include "schietActie.h"
#include <iostream>

//CONSTRUCTOR
schietActie::schietActie() {}

schietActie::schietActie(int minuut, bool opDoel, bool goal) : Actie(minuut) {
    schietActie::goal = goal;
    schietActie::opDoel = opDoel;
}

//DESTRUCTOR
schietActie::~schietActie() {}

//GETTERS
bool schietActie::getGoal() {
    return goal;
}

bool schietActie::getOpDoel() {
    return opDoel;
}

//OPERATOR
ostream &operator<<(ostream &os, const schietActie &schietActie) {
    os << "schietActie: " << schietActie.getMinuut();
    return os;
}
