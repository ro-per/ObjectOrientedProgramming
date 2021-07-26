//
// Created by romeo on 18-11-2019.
//

#include "Afspraak.h"
#include "Datum.h"
#include <iostream>

using namespace std;

//CONSTRUCTOREN_________________________________________________________________________________________________________
//DEFAULT CONSTRUCTOR
Afspraak::Afspraak() : datum(Datum()), plaats("") {
    cout << "Afspraak aangemaakt" << *this << endl;
}

//NORMAL CONSTRUCTOR
Afspraak::Afspraak(Datum *pDatum, string plaats) {
    Afspraak::datum = Datum(pDatum);
    Afspraak::plaats = plaats;
    cout << "Afspraak aangemaakt|Datum:" << datum << "|" << "Plaats:" << Afspraak::plaats << endl;
}

//COPY CONSTRUCTOR
Afspraak::Afspraak(Afspraak &afspraak) /*: datum(afspraak.datum)*/ {
    Afspraak::datum = afspraak.datum;
    Afspraak::plaats = afspraak.plaats;
    cout << "Afspraak aangemaakt|Datum:" << datum << "|" << "Plaats:" << Afspraak::plaats << endl;

}

//EXTRA CONSTRUCTOR
Afspraak::Afspraak(int d, int m, int j, string plaats) : datum(d, m, j), plaats(plaats) {
    cout << "Afspraak aangemaakt|Datum:" << datum << "|" << "Plaats:" << Afspraak::plaats << endl;

}

//DESTRUCTOR____________________________________________________________________________________________________________
Afspraak::~Afspraak() {
    cout << "Er is een afspraak verwijderd" << endl;
}

//GETTERS_______________________________________________________________________________________________________________
const Datum &Afspraak::getDatum() const {
    return datum;
}

const string &Afspraak::getPlaats() const {
    return plaats;
}

//SCHRIJVERS____________________________________________________________________________________________________________
void Afspraak::schrijfNL() {
    cout << datum << "|" << plaats << endl;
}

void Afspraak::schrijfE() /*const*/ {
    Afspraak::datum.schrijfE();
    cout << "|" << plaats << endl;
}

//OPERATORS_____________________________________________________________________________________________________________
ostream &operator<<(ostream &os, const Afspraak &afspraak) {
    os << "|" << afspraak.getDatum() << "|" << afspraak.getPlaats()<<"|"<<endl; //??????????????????????????????????????

    return os;
}

bool Afspraak::operator==(const Afspraak &afspraak) const {
    return datum == afspraak.datum && plaats == afspraak.plaats;
}

bool Afspraak::operator!=(const Afspraak &afspraak) const {
    return !(afspraak == *this);
}