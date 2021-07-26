//
// Created by romeo on 22-11-2019.
//

#ifndef OO_LAB4_VOETBAL_KEEPER_H
#define OO_LAB4_VOETBAL_KEEPER_H

#include <string>
#include "Speler.h"

using namespace std;

class Keeper : public Speler {
private:
    int aantalBallenGevangen;
public:
    //CONSTRUCTOR
    Keeper();

    Keeper(string naam, int rugnummer);

    //DESTRUCTOR
    virtual ~Keeper();

    //GETTERS
    int getAantalBallenGevangen() const;

    //SETTERS
    void addActie(Actie *actie);

    void verwerkActie(Actie *actie);

    //OPERATOR
    friend ostream &operator<<(ostream &os, const Keeper &keeper);

};

#endif //OO_LAB4_VOETBAL_KEEPER_H
