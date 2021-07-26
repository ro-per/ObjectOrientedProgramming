//
// Created by romeo on 9-11-2019.
//

#ifndef OO_LAB3_OVERERVING_COMPUTER_HARDDISK_H
#define OO_LAB3_OVERERVING_COMPUTER_HARDDISK_H

#include <string>
#include "Onderdeel.h"

using namespace std;

class Harddisk : public Onderdeel {
private:
    int capaciteit;
    string soort;
public:
    //CONSTRUCTOREN
    Harddisk();

    Harddisk(int capaciteit, string soort, string naam, int prijs);

    //DESTRUCTOR

    //GETTERS
    int getCapaciteit();

    string getSoort();

    //SCHRIJVERS
    void print();

};

#endif //OO_LAB3_OVERERVING_COMPUTER_HARDDISK_H
