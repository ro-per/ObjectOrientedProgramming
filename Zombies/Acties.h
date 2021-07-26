//
// Created by romeo on 20-1-2020.
//

#ifndef EXAMEN_OO_ZOMBIE_ROMEO_PERMENTIER_ACTIES_H
#define EXAMEN_OO_ZOMBIE_ROMEO_PERMENTIER_ACTIES_H
#include <string>
#include "Speler.h"



class Actie{
private:

public:
    bool * toestandSpeler;
    virtual void schrijf();


};

class BeweegActie:Actie{
    int van;
    int naar;
public:

    void schrijf();
};


class Vecht:Actie{
    bool gewonnen;
public:

    void schrijf();
};


class NeemGeld:Actie{
    int hoeveel;
public:

    void schrijf();
};


class KoopZout:Actie{
    int aantalGekocht;
public:

    void schrijf();
};
#endif //EXAMEN_OO_ZOMBIE_ROMEO_PERMENTIER_ACTIES_H
