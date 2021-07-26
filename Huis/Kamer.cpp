//
// Created by romeo on 19-1-2020.
//


#include <vector>
#include <algorithm>
#include "Kamer.h"
#include "Slaapkamer.h"
#include "Keuken.h"
#include "Kelder.h"
#include "Bed.h"
#include "Stoel.h"
#include "Kast.h"
#include <cstring>

//CONSTRUCTOREN_________________________________________________________________________________________________________
Kamer::Kamer() {
    kamerNummer = 0;
    waardeKamer = 0;
    aantalBedden = 0;
    aantalKasten = 0;
    aantalStoelen = 0;
    cout << "Kamer Default Constructor" << endl;
}

//DESTRUCTOR____________________________________________________________________________________________________________
Kamer::~Kamer() {
    meubels.clear();
    cout << "Kamer deleted" << endl;
}

//GETTERS____________________________________________________________________________________________________________
int Kamer::getWaardeKamer() {
    vector<Meubel *>::iterator itr;
    waardeKamer = 0;
    for (itr = meubels.begin(); itr != meubels.end(); itr++) {
        if ((*itr) != nullptr) {
            waardeKamer += (*itr)->getPrijsMeubel();
        }
    }
    return waardeKamer;
}

int Kamer::getKamerNummer() const {
    return kamerNummer;
}

int Kamer::getAantalBedden() const {
    return aantalBedden;
};

int Kamer::getAantalStoelen() const {
    return aantalStoelen;
};

int Kamer::getAantalKasten() const {
    return aantalKasten;
};


//SETTERS____________________________________________________________________________________________________________
int Kamer::setKamerNummer(int mNummer) {
    kamerNummer = mNummer;
}

//METHODEN____________________________________________________________________________________________________________
//In de kelder kunnen er enkel kasten staan
void Kamer::voegMeubelToe(Meubel *meubel) {
    if (strstr(typeid(*this).name(), "Kelder") != nullptr) {
        if (strstr(typeid(*meubel).name(), "Kast") != nullptr) {
            meubels.push_back(meubel);
            aantalKasten++;
            if (meubel->getNummerMeubel() == 0) {
                meubel->setNummer(aantalKasten);
            }
        } else {
            cout << "In de kelder kunnen enkel kasten staan" << endl;
        }
    } else if (strstr(typeid(*meubel).name(), "Bed") != nullptr) {
        meubels.push_back(meubel);
        aantalBedden++;
        if (meubel->getNummerMeubel() == 0) {
            meubel->setNummer(aantalBedden);
        }
    } else if (strstr(typeid(*meubel).name(), "Stoel") != nullptr) {
        meubels.push_back(meubel);
        aantalStoelen++;
        if (meubel->getNummerMeubel() == 0) {
            meubel->setNummer(aantalStoelen);
        }
    } else if (strstr(typeid(*meubel).name(), "Kast") != nullptr) {
        meubels.push_back(meubel);
        aantalKasten++;
        if (meubel->getNummerMeubel() == 0) {
            meubel->setNummer(aantalKasten);
        }
    }
}

void Kamer::verwijderMeubel(Meubel *meubel) {
    auto itr = find(meubels.begin(), meubels.end(), meubel);
    if (itr != meubels.end()) {
        meubels.erase(itr);
        cout << "Meubel deleted" << endl;
        if (strstr(typeid(*meubel).name(), "Bed") != nullptr) {
            aantalBedden--;
        } else if (strstr(typeid(*meubel).name(), "Stoel") != nullptr) {
            aantalStoelen--;
        } else if (strstr(typeid(*meubel).name(), "Kast") != nullptr) {
            aantalKasten--;
        }
    } else {
        cout << "Meubel niet gevonden" << endl;
    }
}


//PRINTERS____________________________________________________________________________________________________________
void Kamer::printBeddenPrijs() {
    int totaalBedPrijs = 0;
    auto x = [&totaalBedPrijs](auto m) {
        if (strstr(typeid(*m).name(), "Bed") != nullptr) {
            totaalBedPrijs += m->getPrijs();
        }
    };
    for_each(meubels.begin(), meubels.end(), x);
    cout << "Totale prijs van bedden in deze kamer: " << totaalBedPrijs << " €" << endl;
}

void Kamer::printKamer() {
    vector<Meubel *>::iterator itr;
    for (itr = meubels.begin(); itr != meubels.end(); itr++) {
        (*itr)->print();
        cout << "(nr: " << (*itr)->getNummerMeubel();
        cout << ", Prijs: " << (*itr)->getPrijsMeubel() << " €)" << endl;
    }
}


