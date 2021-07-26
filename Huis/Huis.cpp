//
// Created by romeo on 19-1-2020.
//


#include <algorithm>
#include "Huis.h"

//CONSTRUCTOREN_________________________________________________________________________________________________________
Huis::Huis() : adres("ongekend") {
    aantalKamers = 0;
    cout << "Huis Default Constructor" << endl;
}

Huis::Huis(string mAdres) : adres(mAdres) {
    aantalKamers = 0;
};

Huis::Huis(const Huis &huis) {
    aantalKamers = huis.aantalKamers;
    waardeHuis = huis.waardeHuis;
    adres = huis.adres;
}

//DESTRUCTOR____________________________________________________________________________________________________________
Huis::~Huis() {
    kamers.clear();
    cout << "Huis deleted" << endl;
}

//METHODEN____________________________________________________________________________________________________________
void Huis::voegKamerToe(Kamer *kamer) {
    kamers.push_back(kamer);
    aantalKamers++;
    if (kamer->getKamerNummer() == 0) {
        kamer->setKamerNummer(aantalKamers);
    }
}

void Huis::berekenTotalePrijs() {
    vector<Kamer *>::iterator kamer_itr;
    waardeHuis = 0;
    for (kamer_itr = kamers.begin(); kamer_itr != kamers.end(); kamer_itr++) {
        if ((*kamer_itr) != nullptr) {
            waardeHuis += (*kamer_itr)->getWaardeKamer();
        }
    }
    cout << "Totale prijs berekend: " << waardeHuis << " €" << endl;
}

void Huis::voegSlaapkamersToe() {
    cout << "Slaapkamers toevoegen: " << endl;
    int aantalSlaapKamers = 0;
    //LAMBDA EXPRESSION
    for_each(kamers.begin(), kamers.end(), [&aantalSlaapKamers](auto k) {
        if (k->getAantalBedden() > 0) {
            aantalSlaapKamers++;
            cout << "Kamer " << k->getNummer() << ":" << endl;
            k->print();
        }
    });
    cout << "Totaal aantal slaapkamers: " << aantalSlaapKamers << endl;
}

//SCHRIJVERS____________________________________________________________________________________________________________
void Huis::schrijfKamers() {
    cout << "[HUIS]" << endl;
    cout << "(ADRES) " << adres << endl;
    cout << "(KAMERS)" << endl;
    vector<Kamer *>::iterator itr;
    for (itr = kamers.begin(); itr != kamers.end(); itr++) {
        cout << "Kamer " << (*itr)->getKamerNummer() << endl;
        (*itr)->printKamer();
    }
}







