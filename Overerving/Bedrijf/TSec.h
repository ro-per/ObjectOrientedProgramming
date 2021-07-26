//
// Created by romeo on 10-11-2019.
//

#ifndef OO_LAB3_OVERERVING_BEDRIJF_TSEC_H
#define OO_LAB3_OVERERVING_BEDRIJF_TSEC_H

#include <iostream>
#include "Tijdelijk.h"
#include "Secretaresse.h"

using namespace std;

class TSec : public Tijdelijk, public Secretaresse {
private:
    string dienstVanHulp;
public:
    //CONSTRUCTOR
    TSec();

    TSec(string dienstVanHulp);

    TSec(TSec &tsec);

    //DESTRUCTOR
    virtual ~TSec();

    //GETTERS
    string getDienstVanHulp();

    //SCHRIJVERS
    void print();
};

#endif //OO_LAB3_OVERERVING_BEDRIJF_TSEC_H
