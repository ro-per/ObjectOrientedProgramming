//
// Created by romeo on 22-11-2019.
//

#ifndef OO_LAB4_VOETBAL_SCHIETACTIE_H
#define OO_LAB4_VOETBAL_SCHIETACTIE_H

#include <string>
#include "Actie.h"

using namespace std;

class schietActie : public Actie {
private:
    bool goal;
    bool opDoel;
public:
    //CONSTRUCTOR
    schietActie();

    schietActie(int minuut, bool opDoel, bool goal);

    //DESTRUCTOR
    virtual ~schietActie();

    //GETTERS
    bool getGoal();

    bool getOpDoel();

    //OPERATOR
    friend ostream &operator<<(ostream &os, const schietActie &schietActie);

};

#endif //OO_LAB4_VOETBAL_SCHIETACTIE_H
