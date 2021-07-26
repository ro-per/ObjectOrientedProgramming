//
// Created by romeo on 18-11-2019.
//

#include "Verzameling.h"
#include <iostream>

using namespace std;

//CONSTRUCTOREN_________________________________________________________________________________________________________
Verzameling::Verzameling() : grootte(0), aantal(0) {
    Verzameling::afspraken = nullptr;
    cout << *this << endl;
    //cout << grootte << aantal << afspraken<<endl;
}

Verzameling::Verzameling(int grootte) : aantal(0) {
    Verzameling::grootte = abs(grootte);
    Verzameling::afspraken = new Afspraak *[grootte];
    cout << "Verzameling aangemaakt" << endl;
}

Verzameling::Verzameling(const Verzameling &v) : grootte(v.grootte), aantal(v.aantal) {
    Verzameling::afspraken = new Afspraak *[grootte];
    for (int i = 0; i < aantal; i++) {
        afspraken[i] = v.afspraken[i];//verwijzen naar dezelfde objecten
    }
    cout << "Verzameling aangemaakt" << endl;
}

// CONVERSIE/CASTINGCONSTRUCTOR nodig voor friends operator+ en operator*
Verzameling::Verzameling(Afspraak *a) : grootte(10), aantal(1) {
    afspraken = new Afspraak *[grootte];
    afspraken[0] = a;
}

//MOVE CONSTRUCTIE
Verzameling::Verzameling(Verzameling &&v) {
    //stelen bij verzameling v
    Verzameling::grootte = v.grootte;
    Verzameling::aantal = v.aantal;
    Verzameling::afspraken = v.afspraken;
    //resetten verzameling v
    v.afspraken = nullptr;
    v.grootte = 0;
    v.aantal = 0;
}

//DESTRUCTOR____________________________________________________________________________________________________________
Verzameling::~Verzameling() {
    if (afspraken != nullptr) {
        delete[] afspraken;
    }
    //cout << "er is een verzameling verwijderd." << endl;
}

//SETTERS_______________________________________________________________________________________________________________
void Verzameling::add(Afspraak *afspraak) {
    if (!bevat(afspraak)) {
        if (grootte <= aantal) {
            Afspraak **temp = afspraken; //laat iets tijdelijk naar object wijzen
            int nieuweGrootte = grootte * 2 + 2;
            afspraken = new Afspraak *[nieuweGrootte];
            for (int i = 0; i < aantal; ++i) {
                afspraken[i] = temp[i]; //laat nieuwe pointers naar objecten wijzen
            }
            if (temp != nullptr) {
                delete[]temp; //?????????????????????????????????????????????????????
            }
            grootte = nieuweGrootte;
        }
        afspraken[aantal] = afspraak;
        aantal++;
    }
}

//GETTERS_______________________________________________________________________________________________________________

int Verzameling::getAantal() const {
    return aantal;
}

int Verzameling::getGrootte() const {
    return grootte;
}

Afspraak **Verzameling::getAfspraken() const {
    return afspraken;
}

//METHODEN______________________________________________________________________________________________________________
bool Verzameling::bevat(const Afspraak *a) const {
    bool uniek = true;
    int i = 0;
    while (i < aantal && uniek) {
        uniek = !(*afspraken[i] == *a);
        i++;
    }
    return !uniek;
};

//OPERATORS_____________________________________________________________________________________________________________
Verzameling &Verzameling::operator=(const Verzameling &v) {
    if (this != &v) { //do not assign v to v itself
        if (afspraken != nullptr) {
            delete[] afspraken;
        }
        Verzameling::aantal = v.aantal;
        Verzameling::grootte = v.grootte;
        afspraken = new Afspraak *[grootte];
        for (int i = 0; i < aantal; ++i) {
            afspraken[i] = v.afspraken[i];
        }

    }
    return *this;
};

Verzameling &Verzameling::operator=(Verzameling &&v) { //???????????????????????????
    //stelen bij verzameling v
    Verzameling::grootte = v.grootte;
    Verzameling::aantal = v.aantal;
    Verzameling::afspraken = v.afspraken;
    //resetten verzameling v
    v.afspraken = nullptr;
    v.grootte = 0;
    v.aantal = 0;
};

//friends
ostream &operator<<(ostream &os, const Verzameling &verzameling) {
    //cout << verzameling.aantal << endl;
    for (int i = 0; i < verzameling.aantal; ++i) {
        os << "[" << i << "]" << *verzameling.afspraken[i] << endl;
    }
    return os;
};

Verzameling operator+(const Verzameling &v1, const Verzameling &v2) {
    Verzameling v(v1);
    for (int i = 0; i < v2.aantal; ++i) {
        v.add(v2.afspraken[i]);
    }
    return v;
};

Verzameling operator*(const Verzameling &v1, const Verzameling &v2) {
    Verzameling v(v1.grootte + v2.grootte);
    for (int i = 0; i < v1.aantal; ++i) {
        if (v2.bevat(v1.afspraken[i])) {
            v.add(v1.afspraken[i]);
        }
    }
    return v;
};