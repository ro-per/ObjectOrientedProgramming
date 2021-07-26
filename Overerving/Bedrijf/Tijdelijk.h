//
// Created by romeo on 10-11-2019.
//

#ifndef OO_LAB3_OVERERVING_BEDRIJF_TIJDELIJK_H
#define OO_LAB3_OVERERVING_BEDRIJF_TIJDELIJK_H

#include <iostream>

using namespace std;

class Tijdelijk {
private:
    int periode;
public:
    //CONSTRUCTOR
    Tijdelijk();

    Tijdelijk(string periode);

    Tijdelijk(Tijdelijk &tijdelijk);

    //DESTRUCTOR
    virtual ~Tijdelijk();

    //GETTERS
    string getPeriode();

    //SCHRIJVERS
    void print();

    //METHODEN
    void werk();
};

#endif //OO_LAB3_OVERERVING_BEDRIJF_TIJDELIJK_H
