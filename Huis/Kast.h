//
// Created by romeo on 19-1-2020.
//

#ifndef EX___HUIS_KAST_H
#define EX___HUIS_KAST_H
#include "Meubel.h"

class Kast: public Meubel {
public:
    //CONSTRUCTOREN_________________________________________________________________________________________________________
    Kast();
    Kast(const Kast &k);
    //DESTRUCTOR____________________________________________________________________________________________________________
    virtual ~Kast();
    //OPERATORS____________________________________________________________________________________________________________
    Kast &operator=(const Kast &k);
    //PRINTERS____________________________________________________________________________________________________________
    void print() ;
};

#endif //EX___HUIS_KAST_H
