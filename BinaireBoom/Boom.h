//
// Created by romeo on 10-12-2019.
//

#ifndef OO_LAB6_BINAIREBOOM_BOOM_H
#define OO_LAB6_BINAIREBOOM_BOOM_H


#include <memory>
#include "Knoop.h"

using namespace std;

class Boom {
    shared_ptr<Knoop> wortel;
public:
    //CONSTRUCTOR
    Boom() : wortel(nullptr) {}

    //DESTRUCTOR
    ~Boom() {}

    //INVOEGEN VAN EEN WAARDE IN EEN BOOM
    void voegToe(int waarde) {
        //indien de boom nog geen wortel heeft, maak een unieke wortel
        if (wortel == nullptr) {
            wortel = make_unique<Knoop>(waarde);
        }
            // anders moet je een plekje zoeken waar de waarde in de boom past
        else {
            zoekPlek(waarde, wortel); //RECURSIEF
        }
    }

    //ZOEKEN VAN EEN PLEK WAAR EEN WAARDE KAN INGEVOEGD WORDEN
    void zoekPlek(int waarde, shared_ptr<Knoop> &huidigeKnoop) {
        //indien de in te voegen waarde groter is dan de huidige knoop, ga links kijken
        if (huidigeKnoop->waarde > waarde) {
            if (!huidigeKnoop->links) { // indien de linkse knoop niks bevat
                huidigeKnoop->links = make_shared<Knoop>(waarde);
                huidigeKnoop->links->ouder = huidigeKnoop;
            } else {
                this->zoekPlek(waarde, huidigeKnoop->links);
            }
        }
            //indien de in te voegen waarde groter is dan de huidige knoop, ga links kijken
        else if (huidigeKnoop->waarde < waarde) {
            //ga rechts kijken
            if (!huidigeKnoop->rechts) { // indien de rechtse knoop niks bevat
                huidigeKnoop->rechts = make_shared<Knoop>(waarde);
                huidigeKnoop->rechts->ouder = huidigeKnoop;
            } else {
                this->zoekPlek(waarde, huidigeKnoop->rechts);
            }
        }
            //indien de waarde niet groter of kleiner is, dan is ze gelijk en mag ze niet toegevoged worden
        else {
            // waarde reeds gevonden in boom
            cout << waarde << " zit reeds in de boom" << endl;
        }
    }

    //SCHRIJVEN VAN DE BOOM
    void schrijfInOrder() {
        zoekSchrijfKnoop(wortel); //RECURSIEF
        cout << endl;
    }

    //ZOEK DE INORDER VOLGORDE OM TE SCHRIJVEN
    void zoekSchrijfKnoop(shared_ptr<Knoop> huidigeKnoop) {
        if (huidigeKnoop == nullptr) {
            return;
        }
        zoekSchrijfKnoop(huidigeKnoop->links);
        cout << huidigeKnoop->waarde << " ";
        zoekSchrijfKnoop(huidigeKnoop->rechts);

    }

    //VERWIJDEREN VAN EEN KNOOP IN EEN BOOM
    void verwijder(int waarde) {
        zoekVerwijderKnoop(waarde, wortel); //RECURSIEF
    }

    void zoekVerwijderKnoop(int waarde, shared_ptr<Knoop> &huidigeKnoop) {
        //WAARDE NIET GEVONDEN
        if (huidigeKnoop == nullptr) {
            cout << waarde << " niet gevonden in boom" << endl;
        }
        // WAARDE MATCH
        else if (huidigeKnoop->waarde == waarde) {
            //KNOOP IS EEN BLAD
            if (huidigeKnoop->links == nullptr && huidigeKnoop->rechts == nullptr) {
                huidigeKnoop = nullptr;
            }

            //LINKSE SUBTREE
            else if (huidigeKnoop->links != nullptr && huidigeKnoop->rechts == nullptr) {
                huidigeKnoop = move(huidigeKnoop->links);
            }

            //RECHTSTE SUBTREE
            else if (huidigeKnoop->links == nullptr && huidigeKnoop->rechts != nullptr) {
                huidigeKnoop = move(huidigeKnoop->rechts);;
            }

            //LINKSE EN RECHTST SUBTREE
            else {
                //zoeken naar kleinste waarde
                shared_ptr<Knoop> kleinsteKnoop = this->zoekKleinsteWaarde(huidigeKnoop->rechts);
                huidigeKnoop->waarde = kleinsteKnoop->waarde;
                this->zoekVerwijderKnoop(kleinsteKnoop->waarde, kleinsteKnoop);

            }
        }

        //WAARDE KLEINER DAN KNOOP
        else if (huidigeKnoop->waarde > waarde) {
            this->zoekVerwijderKnoop(waarde, huidigeKnoop->links);
        }
        // WAARDE GROTER DAN KNOOP
        else {
            this->zoekVerwijderKnoop(waarde, huidigeKnoop->rechts);
        }
    }

    shared_ptr<Knoop> zoekKleinsteWaarde(shared_ptr<Knoop> &huidigeKnoop) {
        if (huidigeKnoop == nullptr) {
            cout << "minimale waarde niet gevonden" << endl;
        } else if (huidigeKnoop->links == nullptr) {
            return huidigeKnoop;
        } else {
            return this->zoekKleinsteWaarde(huidigeKnoop->links);
        }
    }

};


#endif //OO_LAB6_BINAIREBOOM_BOOM_H
