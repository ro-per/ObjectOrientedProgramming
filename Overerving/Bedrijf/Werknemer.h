//
// Created by romeo on 10-11-2019.
//

#ifndef OO_LAB3_OVERERVING_BEDRIJF_WERKNEMER_H
#define OO_LAB3_OVERERVING_BEDRIJF_WERKNEMER_H

#include <iostream>
#include <string>

using namespace std;

class Werknemer {
private:
    int rekeningNummer;
    int loon;
    string naam;
public:
    //CONSTRUCTOR
    Werknemer();

    Werknemer(int rekeningNummer, int loon, string naam);

    Werknemer(Werknemer &werknemer);

    //DESTRUCTOR
    virtual ~Werknemer();

    //GETTERS
    int getRekening();

    int getLoon();

    string getNaam();

    //SCHRIJVERS
    void print();

    //METHODEN
    void werk();
};

#endif //OO_LAB3_OVERERVING_BEDRIJF_WERKNEMER_H
