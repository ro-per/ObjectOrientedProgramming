//
// Created by romeo on 20-1-2020.
//

#include "Speler.h"
Speler():positie(0),geld(0),zout(0),levend(true),aantalZombies(0){}

bool Speler::setPositie(int p, int max) {
    if ((p >= 0) && (p < max)) {
        positie = p;
        return true;
    } else {
        std::cout << "in afgrond, speler dood" << std::endl;
        levend = false;
        return false;
    }
}

bool Speler::pasGeldAan(int delta) {
    if (delta > 0) {
        geld += delta;
        return true;
    } else {
        if (geld + delta >= 0) {
            std::cout << "voldoende geld" << std::endl;
            geld += delta;
            return true;
        } else {
            std::cout << "niet voldoende geld" << std::endl;
            return false;
        }
    }
}

bool Speler::pasZoutAan(int delta) {
    if (delta > 0) {
        zout += delta;
        return true;
    } else {
        if (zout + delta >= 0) {
            std::cout << "voldoende zout" << std::endl;
            zout += delta;
            return true;
        } else {
            std::cout << "niet voldoende zout" << std::endl;
            return false;
        }
    }
}

bool Speler::vecht(ZombieTegel &z) {
    if (z.isZombie()) {
        if (pasZoutAan(-5)) {
            z.doden();
            aantalZombies++;
            return true;
        } else {
            levend = false;
            return false;
        }
    } else return true;
}

ostream &operator<<(ostream &os, const Speler &speler) {
    os
            << "[Positie speler: " << speler.positie << "]"
            << "[geld speler: " << speler.geld << "]"
            << "[Zout speler: " << speler.zout << "]"
            << "[geld speler: " << speler.levend << "]"
            << "[AantalZombies speler: " << speler.aantalZombies << "]"
            << endl;

    return os;
}
void Speler::vooruit() {
    positie++;
}
void Speler::achterruit() {
    positie--;
}