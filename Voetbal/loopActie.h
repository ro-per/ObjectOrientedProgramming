//
// Created by romeo on 22-11-2019.
//

#ifndef OO_LAB4_VOETBAL_LOOPACTIE_H
#define OO_LAB4_VOETBAL_LOOPACTIE_H

#include <string>
#include "Actie.h"

using namespace std;

class loopActie : public Actie {
private:
    int gelopenMeters;
public:
    //CONSTRUCTOR
    loopActie();

    loopActie(int minuut, int meters);

    //DESTRUCTOR
    virtual ~loopActie();

    //GETTERS
    int getGelopenMeters();

    //OPERATOR
    friend ostream &operator<<(ostream &os, const loopActie &loopActie);

};

#endif //OO_LAB4_VOETBAL_LOOPACTIE_H
