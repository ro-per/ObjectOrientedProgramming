//
// Created by romeo on 9-11-2019.
//

#include "Harddisk.h"
#include <iostream>
//CONSTRUCTOREN
using namespace std;

Harddisk::Harddisk() : Onderdeel() {
    Harddisk::capaciteit = 0;
    Harddisk::soort = "default";
    cout << "Harddisk default" << endl;

}

Harddisk::Harddisk(int capaciteit, string soort, string naam, int prijs) : Onderdeel(naam, prijs) {
    Harddisk::capaciteit = capaciteit;
    Harddisk::soort = soort;
    cout << "Harddisk normal" << endl;
}

//DESTRUCTOR

//GETTERS
int Harddisk::getCapaciteit() {
    return capaciteit;
}

string Harddisk::getSoort() {
    return soort;
};

//SCHRIJVERS
void Harddisk::print() {
    Onderdeel::print();
    cout << "[CAPACITEIT:" << capaciteit << "|SOORT:" << soort << "]" << endl;
}