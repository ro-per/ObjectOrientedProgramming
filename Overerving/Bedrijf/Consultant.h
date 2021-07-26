//
// Created by romeo on 10-11-2019.
//

#ifndef OO_LAB3_OVERERVING_BEDRIJF_CONSULTANT_H
#define OO_LAB3_OVERERVING_BEDRIJF_CONSULTANT_H

#include <iostream>
#include "Tijdelijk.h"
#include "Manager.h"

using namespace std;

class Consultant : public Tijdelijk, public Manager {
private:
    string bedrijf;
public:
    //CONSTRUCTOR
    Consultant();

    Consultant(string bedrijf);

    Consultant(Consultant &consultant);

    //DESTRUCTOR
    virtual ~Consultant();

    //GETTERS
    string getBedrijf();

    //SCHRIJVERS
    void print();

};

#endif //OO_LAB3_OVERERVING_BEDRIJF_CONSULTANT_H
