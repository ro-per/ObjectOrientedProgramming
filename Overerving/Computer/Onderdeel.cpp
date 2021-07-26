//
// Created by romeo on 9-11-2019.
//

#include <iostream>
#include "Onderdeel.h"

using namespace std;

//CONSTRUCTOREN
Onderdeel::Onderdeel() {
    Onderdeel::naam = "No name";
    Onderdeel::prijs = 0;
    cout << "Onderdeel default" << endl;
}

Onderdeel::Onderdeel(string naam, int prijs) {
    Onderdeel::naam = naam;
    Onderdeel::prijs = prijs;
    cout << "Onderdeel normal" << endl;
}

//DESTRUCTOREN
Onderdeel::~Onderdeel() {
    cout << "Onderdeel verwijdert" << endl;
}

//GETTERS
string Onderdeel::getNaam() {
    return naam;
}

int Onderdeel::getPrijs() {
    return prijs;
}

//SCHRIJVERS
void Onderdeel::print() {
    cout << "[naam:" << naam << "|prijs:" << prijs << "]" << endl;
}

//METHODEN
void Onderdeel::instaleer() {
    cout << "Onderdeel " << naam << " is geïnstaleerd" << endl;
}
