//
// Created by romeo on 9-11-2019.
//

#ifndef OO_LAB3_OVERERVING_COMPUTER_ONDERDEEL_H
#define OO_LAB3_OVERERVING_COMPUTER_ONDERDEEL_H

#include <string>

using namespace std;

class Onderdeel {
protected:
    string naam;
    int prijs;
public:
    //CONSTRUCTOREN
    Onderdeel();

    Onderdeel(string naam, int prijs);

    //DESTRUCTOREN
    virtual ~Onderdeel();

    //GETTERS
    string getNaam();

    int getPrijs();

    //SCHRIJVERS
    void print();

    //METHODEN
    void instaleer();
};

#endif //OO_LAB3_OVERERVING_COMPUTER_ONDERDEEL_H
