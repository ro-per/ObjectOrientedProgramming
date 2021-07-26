//
// Created by romeo on 11-11-2019.
//

#include "Computer.h"
#include "Moederbord.h"
#include "Videokaart.h"
#include "Harddisk.h"
#include <iostream>

using namespace std;

//CONSTRUCTOREN
Computer::Computer(Onderdeel* m,Onderdeel* v, Onderdeel* d) {
    onderdelen.push_back(m);
    onderdelen.push_back(v);
    onderdelen.push_back(d);
    cout << "Computer aangemaakt" << endl;
}

//DESTRUCTOR
Computer::~Computer() {
//first delete objecten in vector (mulitple types)
    for (auto &p : onderdelen) {
        delete p;
    }
    onderdelen.clear();
    cout << "Computer is samen met onderdelen verwijderd" << endl;
}
//GETTERS

//SCHRIJVERS
void Computer::print() {
    vector<Onderdeel *>::iterator itr;
    for (itr = onderdelen.begin(); itr != onderdelen.end(); itr++) {
        (*itr)->print();
    }

}

//METHODEN
void Computer::voegOnderdeelToe(Onderdeel *onderdeel) {
    onderdelen.push_back(onderdeel);
    cout << "Onderdeel toegevoegd aan computer" << endl;
}