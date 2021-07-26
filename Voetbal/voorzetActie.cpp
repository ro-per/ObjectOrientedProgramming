//
// Created by romeo on 22-11-2019.
//
#include <iostream>
#include "voorzetActie.h"

//CONSTRUCTOR
voorzetActie::voorzetActie() {}

voorzetActie::voorzetActie(int minuut, bool toegekomen) : Actie(minuut) {
    voorzetActie::toegekomen = toegekomen;
}

//DESTRUCTOR
voorzetActie::~voorzetActie() {}

//GETTERS
bool voorzetActie::getToegekomen() {
    return toegekomen;
}

//OPERATOR
ostream &operator<<(ostream &os, const voorzetActie &voorzetActie) {
    os << "vangActie: " << voorzetActie.getMinuut();
    return os;
}
