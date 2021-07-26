//
// Created by romeo on 18-11-2019.
//

#ifndef OO_LAB2_TIJDEN_CORRECTED_AFSPRAAK_H
#define OO_LAB2_TIJDEN_CORRECTED_AFSPRAAK_H

#include "Datum.h"
#include <ostream>
#include <string>

using namespace std;

class Afspraak {
private:
    Datum datum;
    string plaats;
public:
//CONSTRUCTOREN_________________________________________________________________________________________________________
    Afspraak();

    Afspraak(Datum *pDatum, string plaats);

    Afspraak(Afspraak &afspraak);

    Afspraak(int d, int m, int j, string plaats);

//DESTRUCTOR____________________________________________________________________________________________________________
    virtual ~Afspraak();

//GETTERS_______________________________________________________________________________________________________________
    const Datum &getDatum() const;

    const string &getPlaats() const;

//SCHRIJVERS____________________________________________________________________________________________________________
    void schrijfNL();

    void schrijfE();

//OPERATORS_____________________________________________________________________________________________________________
    friend ostream &operator<<(ostream &os, const Afspraak &afspraak);

    bool operator==(const Afspraak &afspraak) const;

    bool operator!=(const Afspraak &afspraak) const;
};

#endif //OO_LAB2_TIJDEN_CORRECTED_AFSPRAAK_H