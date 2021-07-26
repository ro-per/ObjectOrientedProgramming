//
// Created by romeo on 19-1-2020.
//

#ifndef EX___HUIS_MEUBEL_H
#define EX___HUIS_MEUBEL_H

#include <iostream>

using namespace std;

class Meubel {
    int prijsMeubel;
    int nummerMeubel;
public:
    //CONSTRUCTOREN_________________________________________________________________________________________________________
    Meubel();

    Meubel(const Meubel &m);

    //DESTRUCTOR____________________________________________________________________________________________________________
    virtual ~Meubel();

    //GETTERS____________________________________________________________________________________________________________
    int getNummerMeubel() const;

    int getPrijsMeubel() const;

    //SETTERS____________________________________________________________________________________________________________
    void setPrijs(int mPrijs);

    void setNummer(int mNummer);

    //OPERATORS____________________________________________________________________________________________________________
    Meubel operator=(const Meubel &m);

    //PRINTERS____________________________________________________________________________________________________________
    virtual void print();    //overschrijfbare methode met virtual voor alle afgeleide klassen
};

#endif //EX___HUIS_MEUBEL_H