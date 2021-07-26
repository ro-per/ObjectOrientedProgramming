//
// Created by romeo on 20-1-2020.
//

#ifndef EXAMEN_OO_ZOMBIE_ROMEO_PERMENTIER_SPELER_H
#define EXAMEN_OO_ZOMBIE_ROMEO_PERMENTIER_SPELER_H
#include "Tegels.h"
#include <iostream>

class Speler{
    int positie;
    int geld;
    int zout;
    bool levend;
    int aantalZombies;
public:
    Speler();
    bool setPositie(int p,int max);
    int getPositie(){return positie;}
    int getGeld(){return geld;}
    int getZout(){return zout;}
    bool pasGeldAan(int delta);
    bool pasZoutAan(int delta);
    bool vecht(ZombieTegel& z);
    bool isLevend(){ return levend; }
    friend ostream &operator<<(ostream &os, const Speler &speler);
    void vooruit();
    void achterruit();


    };
#endif //EXAMEN_OO_ZOMBIE_ROMEO_PERMENTIER_SPELER_H
