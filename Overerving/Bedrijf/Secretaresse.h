//
// Created by romeo on 10-11-2019.
//

#ifndef OO_LAB3_OVERERVING_BEDRIJF_SECRETARESSE_H
#define OO_LAB3_OVERERVING_BEDRIJF_SECRETARESSE_H

#include <iostream>
#include "Werknemer.h"

using namespace std;

class Secretaresse : public Werknemer {
private:
    string bureauPlek;
public:
    //CONSTRUCTOR
    Secretaresse();

    Secretaresse(string bureauPlek);

    Secretaresse(Secretaresse &secretaresse);

    //DESTRUCTOR
    virtual ~Secretaresse();

    //GETTERS
    string getBureauPlek();

    //SCHRIJVERS
    void print();

    //METHODEN
    void werk();
};

#endif //OO_LAB3_OVERERVING_BEDRIJF_SECRETARESSE_H
