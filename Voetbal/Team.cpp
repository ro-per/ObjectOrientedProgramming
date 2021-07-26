//
// Created by romeo on 5-12-2019.
//

#include <iostream>
#include <algorithm>
#include "Team.h"

//CONSTRUCTOR
Team::Team() : naam("No name") {}

Team::Team(string naam) : naam(naam) {}

//DESTRUCTOR
Team::~Team() {
    team.clear();
    selectie.clear();
    keepers.clear();
    verdedigers.clear();
    middenvelders.clear();
    aanvallers.clear();
    cout << "Team verwijderd" << endl;
}

//GETTERS
string Team::getNaam() const {
    return naam;
}

int Team::getPuntenTeam() const {
    return puntenTeam;
}

int Team::getPuntenSelectie() const {
    return puntenSelectie;
}

//SETTERS
void Team::voegSpelerToe(Speler *speler) {
    team.push_back(speler);
}

void Team::printTeam() {
    for (teamIt = team.begin(); teamIt != team.end(); teamIt++) {
        cout << **teamIt;
    }
}

void Team::printSelectie() {
    for (selectieIt = selectie.begin(); selectieIt != selectie.end(); selectieIt++) {
        cout << **selectieIt;
    }
}

void Team::maakSelectie(int aantal_k, int aantal_v, int aantal_m, int aantal_a) {
    cout << "DE BESTE PLOEG IS: " << endl;
    //KEEPER
    for (keeperIt = keepers.begin(); keeperIt != keepers.begin() + aantal_k; keeperIt++) {
        //cout << **keeperIt;
        selectie.push_back(*keeperIt);
    }
    //VERDEDIGERS
    for (verdedigerIt = verdedigers.begin(); verdedigerIt != verdedigers.begin() + aantal_v; verdedigerIt++) {
        //cout << **verdedigerIt;
        selectie.push_back(*verdedigerIt);

    }
    //MIDDENVELDERS
    for (middenvelderIt = middenvelders.begin(); middenvelderIt != middenvelders.begin() + aantal_m; middenvelderIt++) {
        //cout << **middenvelderIt;
        selectie.push_back(*middenvelderIt);

    }
    //AANVALLERS
    for (aanvallerIt = aanvallers.begin(); aanvallerIt != aanvallers.begin() + aantal_a; aanvallerIt++) {
        //cout << **aanvallerIt;
        selectie.push_back(*aanvallerIt);

    }

}

//METHODEN
void Team::sorteerTeam() {
    sort(team.begin(), team.end(), [](const Speler *s1, const Speler *s2) {
        return (s1->getPunten() > s2->getPunten());
    });

    for (teamIt = team.begin(); teamIt != team.end(); teamIt++) {
        if (Keeper *ptr_k = dynamic_cast<Keeper *>((*teamIt))) {
            keepers.push_back(ptr_k);
        }
        if (Verdediger *ptr_v = dynamic_cast<Verdediger *>((*teamIt))) {
            verdedigers.push_back(ptr_v);
        }
        if (Middenvelder *ptr_m = dynamic_cast<Middenvelder *>((*teamIt))) {
            middenvelders.push_back(ptr_m);
        }
        if (Aanvaller *ptr_a = dynamic_cast<Aanvaller *>((*teamIt))) {
            aanvallers.push_back(ptr_a);
        }
    }

}
