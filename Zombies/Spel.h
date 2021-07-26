//
// Created by romeo on 20-1-2020.
//

#ifndef EXAMEN_OO_ZOMBIE_ROMEO_PERMENTIER_SPEL_H
#define EXAMEN_OO_ZOMBIE_ROMEO_PERMENTIER_SPEL_H
#include <vector>
#include <list>
#include "Tegels.h"
#include "Acties.h"
#include "Speler.h"
using namespace std;

class Spel{
    vector<Tegel *> tegels;
    vector<Tegel *>::iterator tegelIt;

    Speler *speler;
    list<Actie*> acties;
    list<Actie *>::iterator actieIt;
     //DELETES IN OPKUISEN !!!
    Tegel *begintegel;
    Tegel *eindtegel;
    Tegel *temp;

    //TODO
public:
    void initSpel(int aantal);
    void teken();
    void schrijfResultaat();
    void stapVooruit();
    void stapAchteruit();
    void spring();
    void koopZout();
    bool isGedaan(){
        return (!speler.isLevend() || (speler.getPositie()==tegels.size()-1));
    }
    void replay();
    void opkuisen();
};
#endif //EXAMEN_OO_ZOMBIE_ROMEO_PERMENTIER_SPEL_H
