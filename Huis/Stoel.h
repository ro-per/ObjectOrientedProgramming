//
// Created by romeo on 19-1-2020.
//

#ifndef EX___HUIS_STOEL_H
#define EX___HUIS_STOEL_H

#include "Meubel.h"

class Stoel : public Meubel {
public:
    //CONSTRUCTOREN_________________________________________________________________________________________________________
    Stoel();

    Stoel(const Stoel &s);

    //DESTRUCTOR____________________________________________________________________________________________________________
    virtual ~Stoel();
    //OPERATORS____________________________________________________________________________________________________________

    Stoel operator=(const Stoel &s);
    //PRINTERS____________________________________________________________________________________________________________

    void print();
};

#endif //EX___HUIS_STOEL_H
