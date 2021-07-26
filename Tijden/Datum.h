//
// Created by romeo on 18-11-2019.
//

#ifndef OO_LAB2_TIJDEN_CORRECTED_DATUM_H
#define OO_LAB2_TIJDEN_CORRECTED_DATUM_H

#include <iostream>

using namespace std;

class Datum {
private:
    int d, m, j;
public:
//CONSTRUCTOREN_________________________________________________________________________________________________________
    Datum();

    Datum(int d, int m, int j);

    Datum(Datum *pDatum);

//DESTRUCTOR____________________________________________________________________________________________________________
    virtual ~Datum();

//GETTERS_______________________________________________________________________________________________________________
    int getDag() const;

    int getMaand() const;

    int getJaar() const;

//SCHRIJVERS____________________________________________________________________________________________________________
    void schrijfNL();

    void schrijfE();

    void schrijfEendl();

//OPERATORS_____________________________________________________________________________________________________________
    friend ostream &operator<<(ostream &os, const Datum &datum);

    bool operator==(const Datum &datum) const;

    bool operator!=(const Datum &datum) const;
};

#endif //OO_LAB2_TIJDEN_CORRECTED_DATUM_H