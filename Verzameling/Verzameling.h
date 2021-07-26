//
// Created by romeo on 18-11-2019.
//

#ifndef OO_LAB2_TIJDEN_CORRECTED_VERZAMELING_H
#define OO_LAB2_TIJDEN_CORRECTED_VERZAMELING_H

#include <iostream>
#include "Afspraak.h"


using namespace std;

template <class T> class Verzameling {
private:
    T **lijst; //array van pointers naar T objecten
    int grootte; // grootte van de array
    int aantal; // aantal elementen in de array
public:
//CONSTRUCTOREN_________________________________________________________________________________________________________
    Verzameling();

    Verzameling(int grootte);

    Verzameling(const Verzameling<T> &v);

    Verzameling(T *t); //cast t->verzameling

    Verzameling(Verzameling<T> &&v); //MOVE CONSTRUCTIE

//DESTRUCTOR____________________________________________________________________________________________________________
    virtual ~Verzameling();

//SETTERS_______________________________________________________________________________________________________________
    void add(T *t);

//GETTERS_______________________________________________________________________________________________________________
    int getAantal() const;

    int getGrootte() const;

    T **getLijst() const;

//METHODEN______________________________________________________________________________________________________________
    bool bevat(const T *t) const;

//OPERATORS_____________________________________________________________________________________________________________
    Verzameling<T> &operator=(const Verzameling<T> &v); //????????????????????????????????????????????????????????????????

    Verzameling<T> &operator=(Verzameling<T> &&v);//??????????????????????????????????????????????????????????????????????

    template <class U> friend ostream &operator<<(ostream &os, const Verzameling<U> &verzameling);

    template <class U> friend Verzameling<U> operator+(const Verzameling<U> &v1, const Verzameling<U> &v2);

    template <class U> friend Verzameling<U> operator*(const Verzameling<U> &v1, const Verzameling<U> &v2);

};
//CONSTRUCTOREN_________________________________________________________________________________________________________
template <class T> Verzameling<T>::Verzameling() : grootte(0), aantal(0) {
    Verzameling::lijst = nullptr;
    cout << *this << endl;
    //cout << grootte << aantal << lijst<<endl;
}

template <class T> Verzameling<T>::Verzameling(int grootte) : aantal(0) {
    Verzameling::grootte = abs(grootte);
    Verzameling::lijst = new T *[grootte];
    cout << "Verzameling aangemaakt" << endl;
}

template <class T> Verzameling<T>::Verzameling(const Verzameling<T> &v) : grootte(v.grootte), aantal(v.aantal) {
    Verzameling::lijst = new T *[grootte];
    for (int i = 0; i < aantal; i++) {
        lijst[i] = v.lijst[i];//verwijzen naar dezelfde objecten
    }
    cout << "Verzameling aangemaakt" << endl;
}

// CONVERSIE/CASTINGCONSTRUCTOR nodig voor friends operator+ en operator*
template <class T> Verzameling<T>::Verzameling(T *t) : grootte(10), aantal(1) {
    lijst = new T *[grootte];
    lijst[0] = t;
}

//MOVE CONSTRUCTIE
template <class T> Verzameling<T>::Verzameling(Verzameling<T> &&v) {
    //stelen bij verzameling v
    Verzameling::grootte = v.grootte;
    Verzameling::aantal = v.aantal;
    Verzameling::lijst = v.lijst;
    //resetten verzameling v
    v.lijst = nullptr;
    v.grootte = 0;
    v.aantal = 0;
}

//DESTRUCTOR____________________________________________________________________________________________________________
template <class T> Verzameling<T>::~Verzameling() {
    if (lijst != nullptr) {
        delete[] lijst;
    }
    //cout << "er is een verzameling verwijderd." << endl;
}

//SETTERS_______________________________________________________________________________________________________________
template <class T> void Verzameling<T>::add(T *t) {
    if (!bevat(t)) {
        if (grootte <= aantal) {
            T **temp = lijst; //laat iets tijdelijk naar object wijzen
            int nieuweGrootte = grootte * 2 + 2;
            lijst = new T *[nieuweGrootte];
            for (int i = 0; i < aantal; ++i) {
                lijst[i] = temp[i]; //laat nieuwe pointers naar objecten wijzen
            }
            if (temp != nullptr) {
                delete[]temp; //?????????????????????????????????????????????????????
            }
            grootte = nieuweGrootte;
        }
        lijst[aantal] = t;
        aantal++;
    }
}

//GETTERS_______________________________________________________________________________________________________________

template <class T> int Verzameling<T>::getAantal() const {
    return aantal;
}

template<class T>int Verzameling<T>::getGrootte() const {
    return grootte;
}

template <class T> T **Verzameling<T>::getLijst() const {
    return lijst;
}

//METHODEN______________________________________________________________________________________________________________
template <class T> bool Verzameling<T>::bevat(const T *a) const {
    bool uniek = true;
    int i = 0;
    while (i < aantal && uniek) {
        uniek = !(*lijst[i] == *a);
        i++;
    }
    return !uniek;
};

//OPERATORS_____________________________________________________________________________________________________________
template <class T> Verzameling<T> &Verzameling<T>::operator=(const Verzameling<T> &v) {
    if (this != &v) { //do not assign v to v itself
        if (lijst != nullptr) {
            delete[] lijst;
        }
        Verzameling::aantal = v.aantal;
        Verzameling::grootte = v.grootte;
        lijst = new T *[grootte];
        for (int i = 0; i < aantal; ++i) {
            lijst[i] = v.lijst[i];
        }

    }
    return *this;
};

template <class T> Verzameling<T> &Verzameling<T>::operator=(Verzameling<T> &&v) { //???????????????????????????
    //stelen bij verzameling v
    Verzameling::grootte = v.grootte;
    Verzameling::aantal = v.aantal;
    Verzameling::lijst = v.lijst;
    //resetten verzameling v
    v.lijst = nullptr;
    v.grootte = 0;
    v.aantal = 0;
};

//friends
template <class U> ostream &operator<<(ostream &os, const Verzameling<U> &verzameling) {
    //cout << verzameling.aantal << endl;
    for (int i = 0; i < verzameling.aantal; ++i) {
        os << "[" << i << "]" << *verzameling.lijst[i] << endl;
    }
    return os;
};

template <class U> Verzameling<U> operator+(const Verzameling<U> &v1, const Verzameling<U> &v2) {
    Verzameling<U> v(v1);
    for (int i = 0; i < v2.aantal; ++i) {
        v.add(v2.lijst[i]);
    }
    return v;
};

template <class U> Verzameling<U> operator*(const Verzameling<U> &v1, const Verzameling<U> &v2) {
    Verzameling<U> v(v1.grootte + v2.grootte);
    for (int i = 0; i < v1.aantal; ++i) {
        if (v2.bevat(v1.lijst[i])) {
            v.add(v1.lijst[i]);
        }
    }
    return v;

};
#endif //OO_LAB2_TIJDEN_CORRECTED_VERZAMELING_H