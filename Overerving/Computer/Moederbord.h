//
// Created by romeo on 9-11-2019.
//

#ifndef OO_LAB3_OVERERVING_COMPUTER_MOEDERBORD_H
#define OO_LAB3_OVERERVING_COMPUTER_MOEDERBORD_H

#include "Onderdeel.h"
#include <string>

using namespace std;

class Moederbord : public Onderdeel {
private:
    int aansluitingen;
    string koeling;
public:
    //CONSTRUCTOREN
    Moederbord();

    Moederbord(int aansluitingen, string koeling, string naam, int prijs);

    //DESTRUCTOR

    //GETTERS
    int getAansluitingen();

    string getKoeling();

    //SCHRIJVERS
    void print();

};

#endif //OO_LAB3_OVERERVING_COMPUTER_MOEDERBORD_H
