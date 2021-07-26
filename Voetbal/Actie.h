//
// Created by romeo on 22-11-2019.
//

#ifndef OO_LAB4_VOETBAL_ACTIE_H
#define OO_LAB4_VOETBAL_ACTIE_H

#include <string>

using namespace std;

class Actie {
private:
    int minuut;
public:
    //CONSTRUCTOR
    Actie();

    Actie(int minuut);

    //DESTRUCTOR
    virtual ~Actie();

    //GETTERS
    int getMinuut() const;

    //OPERATOR
    friend ostream &operator<<(ostream &os, const Actie &actie);

};

#endif //OO_LAB4_VOETBAL_ACTIE_H
