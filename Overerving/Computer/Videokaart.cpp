//
// Created by romeo on 9-11-2019.
//

#include "Videokaart.h"
#include <iostream>

using namespace std;

//CONSTRUCTOREN
Videokaart::Videokaart() : Onderdeel() {
    Videokaart::MHz = 0;
    Videokaart::gebruik = "default";
    cout << "Videokaart default" << endl;
}

Videokaart::Videokaart(int MHz, string gebruik, string naam, int prijs) : Onderdeel(naam, prijs) {
    Videokaart::MHz = MHz;
    Videokaart::gebruik = gebruik;
    cout << "Videokaart normal" << endl;

}

//GETTERS
int Videokaart::getMHz() {
    return MHz;
}

string Videokaart::getGebruik() {
    return gebruik;
}

//SCHRIJVERS
void Videokaart::print() {
    Onderdeel::print();
    cout << "[MHZ:" << MHz << "|GEBRUIK:" << gebruik << "]" << endl;
}