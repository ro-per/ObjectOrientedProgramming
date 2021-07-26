//
// Created by romeo on 10-11-2019.
//

#ifndef OO_LAB3_OVERERVING_BEDRIJF_MANAGER_H
#define OO_LAB3_OVERERVING_BEDRIJF_MANAGER_H

#include <iostream>
#include "Werknemer.h"

using namespace std;

class Manager : public Werknemer {
private:
    string afdeling;
public:
    //CONSTRUCTOR
    Manager();

    Manager(string afdeling);

    Manager(Manager &manager);

    //DESTRUCTOR
    virtual ~Manager();

    //GETTERS
    string getAfdeling();

    //SCHRIJVERS
    void print();

    //METHODEN
    void werk();
};

#endif //OO_LAB3_OVERERVING_BEDRIJF_MANAGER_H
