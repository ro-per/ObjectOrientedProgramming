//
// Created by romeo on 5-12-2019.
//

#ifndef OO_LAB4_VOETBAL_TEAM_H
#define OO_LAB4_VOETBAL_TEAM_H

#include <string>
#include "Speler.h"
#include "Keeper.h"
#include "Verdediger.h"
#include "Aanvaller.h"
#include "Middenvelder.h"

#include <typeinfo>

using namespace std;


class Team {
private:
    string naam;
    int puntenTeam;
    int puntenSelectie;

    vector<Speler *> team;
    vector<Speler *>::iterator teamIt;

    vector<Speler *> selectie;
    vector<Speler *>::iterator selectieIt;

    vector<Keeper *> keepers;
    vector<Keeper *>::iterator keeperIt;

    vector<Verdediger *> verdedigers;
    vector<Verdediger *>::iterator verdedigerIt;

    vector<Middenvelder *> middenvelders;
    vector<Middenvelder *>::iterator middenvelderIt;

    vector<Aanvaller *> aanvallers;
    vector<Aanvaller *>::iterator aanvallerIt;
public:
    //CONSTRUCTOR
    Team();

    Team(string naam);

    //DESTRUCTOR
    virtual ~Team();

    //GETTERS
    string getNaam() const;

    int getPuntenTeam() const;

    int getPuntenSelectie() const;

    //SETTERS
    void voegSpelerToe(Speler *speler);

    //PRINTERS
    void printTeam();

    void printSelectie();

    //METHODEN
    void sorteerTeam();

    void maakSelectie(int keeperAantal, int verdedigerAantal, int middenvelderAantal, int aanvallerAantal);

};

#endif //OO_LAB4_VOETBAL_TEAM_H
