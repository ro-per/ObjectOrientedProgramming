//
// Created by romeo on 22-11-2019.
//

#include <iostream>
#include "Actie.h"

using namespace std;

//CONSTRUCTOR
Actie::Actie() {}

Actie::Actie(int minuut) {
    Actie::minuut = abs(minuut);
}

//DESTRUCTOR
Actie::~Actie() {}

//GETTERS
int Actie::getMinuut() const {
    return minuut;
}

//OPERATORS
ostream &operator<<(ostream &os, const Actie &actie) {
    os << "Actie: " << actie.minuut;
    return os;
};

