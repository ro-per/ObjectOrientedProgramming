//
// Created by romeo on 19-1-2020.
//

#ifndef EX___HUIS_HUIS_H
#define EX___HUIS_HUIS_H


#include "Kamer.h"
#include <iostream>

using namespace std;

#include <vector>

class Huis {
    string adres;
    vector<Kamer *> kamers;
    int aantalKamers;
    int waardeHuis;

public:
    //CONSTRUCTOREN_________________________________________________________________________________________________________
    Huis();

    Huis(string adres);

    Huis(const Huis &huis);

    //DESTRUCTOR____________________________________________________________________________________________________________
    virtual ~Huis();

    //METHODEN____________________________________________________________________________________________________________
    void voegKamerToe(Kamer *kamer);

    void berekenTotalePrijs();

    void voegSlaapkamersToe();

    //SCHRIJVERS____________________________________________________________________________________________________________

    void schrijfKamers();


};


#endif //EX___HUIS_HUIS_H
