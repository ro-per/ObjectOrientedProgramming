//
// Created by romeo on 18-11-2019.
//

#ifndef OO_LAB2_TIJDEN_CORRECTED_VERZAMELING_H
#define OO_LAB2_TIJDEN_CORRECTED_VERZAMELING_H

#include <iostream>
#include "Afspraak.h"

using namespace std;

class Verzameling {
private:
    Afspraak **afspraken; //array van pointers naar afspraak objecten
    int grootte; // grootte van de array
    int aantal; // aantal elementen in de array
public:
//CONSTRUCTOREN_________________________________________________________________________________________________________
    Verzameling();

    Verzameling(int grootte);

    Verzameling(const Verzameling &v);

    Verzameling(Afspraak *a); //cast afspraak->verzameling

    Verzameling(Verzameling &&v);//??????????????????????????????????????????????????

//DESTRUCTOR____________________________________________________________________________________________________________
    virtual ~Verzameling();

//SETTERS_______________________________________________________________________________________________________________
    void add(Afspraak *afspraak);

//GETTERS_______________________________________________________________________________________________________________
    int getAantal() const;

    int getGrootte() const;

    Afspraak **getAfspraken() const;

//METHODEN______________________________________________________________________________________________________________
    bool bevat(const Afspraak *a) const;

//OPERATORS_____________________________________________________________________________________________________________
    Verzameling &operator=(const Verzameling &v); //????????????????????????????????????????????????????????????????

    Verzameling &operator=(Verzameling &&v);//??????????????????????????????????????????????????????????????????????

    friend ostream &operator<<(ostream &os, const Verzameling &verzameling);

    friend Verzameling operator+(const Verzameling &v1, const Verzameling &v2);

    friend Verzameling operator*(const Verzameling &v1, const Verzameling &v2);

};

#endif //OO_LAB2_TIJDEN_CORRECTED_VERZAMELING_H