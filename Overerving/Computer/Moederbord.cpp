//
// Created by romeo on 9-11-2019.
//

#include "Moederbord.h"
#include <iostream>

using namespace std;

//CONSTRUCTOREN
Moederbord::Moederbord() : Onderdeel() {
    Moederbord::aansluitingen = 0;
    Moederbord::koeling = "Geen koeling";
    cout << "Moederbord default" << endl;
}

Moederbord::Moederbord(int aansluitingen, string koeling, string naam, int prijs) : Onderdeel(naam, prijs) {
    Moederbord::aansluitingen = aansluitingen;
    Moederbord::koeling = koeling;
    cout << "Moederbord normal" << endl;
}

//DESTRUCTOR

//GETTERS
int Moederbord::getAansluitingen() {
    return aansluitingen;
};

string Moederbord::getKoeling() {
    return koeling;
};

//SCHRIJVERS

void Moederbord::print() {
    Onderdeel::print();
    cout << "[AANSLUITINGEN:" << aansluitingen << "|KOELING:" << koeling << "]" << endl;

}