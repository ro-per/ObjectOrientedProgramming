//
// Created by romeo on 11-11-2019.
//

#ifndef OO_LAB3_OVERERVING_COMPUTER_COMPUTER_H
#define OO_LAB3_OVERERVING_COMPUTER_COMPUTER_H

#include <string>
#include <vector>
#include "Onderdeel.h"

using namespace std;

class Computer {
private:
    vector<Onderdeel *> onderdelen;
public:
    //CONSTRUCTOREN
    Computer(Onderdeel* m,Onderdeel* v, Onderdeel* d);

    //DESTRUCTOR
    virtual ~Computer();
    //GETTERS

    //SCHRIJVERS
    void print();

    //METHODEN
    void voegOnderdeelToe(Onderdeel *onderdeel);

};

#endif //OO_LAB3_OVERERVING_COMPUTER_COMPUTER_H
