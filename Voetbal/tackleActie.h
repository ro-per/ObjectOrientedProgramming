//
// Created by romeo on 22-11-2019.
//

#ifndef OO_LAB4_VOETBAL_TACKLEACTIE_H
#define OO_LAB4_VOETBAL_TACKLEACTIE_H

#include <string>
#include "Actie.h"

using namespace std;

class tackleActie : public Actie {
private:
    bool overtreding;
public:
    //CONSTRUCTOR
    tackleActie();

    tackleActie(int minuut, bool overtreding);

    //DESTRUCTOR
    virtual ~tackleActie();

    //GETTERS
    bool getOvertreding();

    //OPERATOR
    friend ostream &operator<<(ostream &os, const tackleActie &tackleActie);

};

#endif //OO_LAB4_VOETBAL_TACKLEACTIE_H
