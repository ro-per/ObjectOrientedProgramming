//
// Created by romeo on 22-11-2019.
//

#ifndef OO_LAB4_VOETBAL_PASACTIE_H
#define OO_LAB4_VOETBAL_PASACTIE_H

#include <string>
#include "Actie.h"

using namespace std;

class pasActie : public Actie {
private:
    bool toegekomen;
public:
    //CONSTRUCTOR
    pasActie();

    pasActie(int minuut, bool toegekomen);

    //DESTRUCTOR
    virtual ~pasActie();

    //GETTERS
    bool getToegekomen();

    //OPERATOR
    friend ostream &operator<<(ostream &os, const pasActie &pasActie);

};

#endif //OO_LAB4_VOETBAL_PASACTIE_H
