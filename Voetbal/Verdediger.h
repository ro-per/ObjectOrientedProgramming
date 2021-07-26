//
// Created by romeo on 22-11-2019.
//

#ifndef OO_LAB4_VOETBAL_VERDEDIGER_H
#define OO_LAB4_VOETBAL_VERDEDIGER_H

#include <string>
#include "Speler.h"

using namespace std;

class Verdediger : public Speler {
private:
    int aantalTackles;
public:
    //CONSTRUCTOR
    Verdediger();

    Verdediger(string naam, int rugnummer);

    //DESTRUCTOR
    virtual ~Verdediger();

    //GETTERS
    int getAantalTackles() const;

    //SETTERS
    void addActie(Actie *actie);

    void verwerkActie(Actie *actie);

    //OPERATOR
    friend ostream &operator<<(ostream &os, const Verdediger &verdediger);

};

#endif //OO_LAB4_VOETBAL_VERDEDIGER_H
