//
// Created by romeo on 10-11-2019.
//

#ifndef OO_LAB3_OVERERVING_BEDRIJF_DIRECTEUR_H
#define OO_LAB3_OVERERVING_BEDRIJF_DIRECTEUR_H


#include <iostream>
#include "Manager.h"

using namespace std;

class Directeur : public Manager {
private:
    string bedrijf;
public:
    //CONSTRUCTOR
    Directeur();

    Directeur(string bedrijf);

    Directeur(Directeur &directeur);

    //DESTRUCTOR
    virtual ~Directeur();

    //GETTERS
    string getBedrijf();

    //SCHRIJVERS
    void print();

    //METHODEN
    void werk();
};

#endif //OO_LAB3_OVERERVING_BEDRIJF_DIRECTEUR_H
