//
// Created by romeo on 22-11-2019.
//

#ifndef OO_LAB4_VOETBAL_VANGACTIE_H
#define OO_LAB4_VOETBAL_VANGACTIE_H

#include <string>
#include "Actie.h"

using namespace std;

class vangActie : public Actie {
private:
    bool gevangen;
public:
    //CONSTRUCTOR
    vangActie();

    vangActie(int minuut, bool gevangen);

    //DESTRUCTOR
    virtual ~vangActie();

    //GETTERS
    bool getGevangen();

    //OPERATOR
    friend ostream &operator<<(ostream &os, const vangActie &vangActie);

};

#endif //OO_LAB4_VOETBAL_VANGACTIE_H
