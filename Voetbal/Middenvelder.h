//
// Created by romeo on 22-11-2019.
//

#ifndef OO_LAB4_VOETBAL_MIDDENVELDER_H
#define OO_LAB4_VOETBAL_MIDDENVELDER_H

#include <string>
#include "Speler.h"

using namespace std;

class Middenvelder : public Speler {
private:
    int aantalVoorzetten;
public:
    //CONSTRUCTOR
    Middenvelder();

    Middenvelder(string naam, int rugnummer);

    //DESTRUCTOR
    virtual ~Middenvelder();

    //GETTERS
    int getAantalVoorzetten() const;

    //SETTERS
    void addActie(Actie *actie);

    void verwerkActie(Actie *actie);

    //OPERATOR
    friend ostream &operator<<(ostream &os, const Middenvelder &middenvelder);

};

#endif //OO_LAB4_VOETBAL_MIDDENVELDER_H
