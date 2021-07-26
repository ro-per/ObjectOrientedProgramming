//
// Created by romeo on 22-11-2019.
//

#ifndef OO_LAB4_VOETBAL_VOORZETACTIE_H
#define OO_LAB4_VOETBAL_VOORZETACTIE_H

#include <string>
#include "Actie.h"

using namespace std;

class voorzetActie : public Actie {
private:
    bool toegekomen;
public:
    //CONSTRUCTOR
    voorzetActie();

    voorzetActie(int minuut, bool toegekomen);

    //DESTRUCTOR
    virtual ~voorzetActie();

    //GETTERS
    bool getToegekomen();

    //OPERATOR
    friend ostream &operator<<(ostream &os, const voorzetActie &voorzetActie);

};

#endif //OO_LAB4_VOETBAL_VOORZETACTIE_H
