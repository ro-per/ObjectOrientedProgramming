//
// Created by romeo on 18-11-2019.
//

#include "Datum.h"
#include <iostream>

using namespace std;

//CONSTRUCTOREN_________________________________________________________________________________________________________
//DEFAULT CONSTRUCTOR
Datum::Datum() : d(0), m(0), j(0000) {
    cout << *this << endl;
}

//NORMAL CONSTRUCTOR
Datum::Datum(int dag, int maand, int jaar) : d(dag), m(maand), j(jaar) {
    cout << *this << endl;
}

//COPY CONSTRUCTOR
Datum::Datum(Datum *pDatum) {
    Datum::d = pDatum->d;
    Datum::m = pDatum->m;
    Datum::j = pDatum->j;
    cout << *this << endl;
}

//DESTRUCTOR____________________________________________________________________________________________________________
Datum::~Datum() {
    cout << "Er is een datum verwijderd" << endl;
};

//GETTERS_______________________________________________________________________________________________________________
int Datum::getDag() const {
    return d;
}

int Datum::getMaand() const {
    return m;
}

int Datum::getJaar() const {
    return j;
}

//SCHRIJVERS____________________________________________________________________________________________________________
void Datum::schrijfNL() {
    cout << "(" << d << "/" << m << "/" << j << ")";
}


void Datum::schrijfE() {
    cout << "(" << m << "/" << d << "/" << j << ")";
}

void Datum::schrijfEendl() {
    cout << "(" << m << "/" << d << "/" << j << ")" << endl;
}

//OPERATORS_____________________________________________________________________________________________________________
ostream &operator<<(ostream &os, const Datum &datum) {
    os << "(" << datum.d << "/" << datum.m << "/" << datum.j << ")";
    return os;
}

bool Datum::operator==(const Datum &datum) const {
    return d == datum.d && m == datum.m && j == datum.j;
}

bool Datum::operator!=(const Datum &datum) const {
    return !(datum == *this);
}