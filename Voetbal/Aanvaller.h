//
// Created by romeo on 22-11-2019.
//

#ifndef OO_LAB4_VOETBAL_AANVALLER_H
#define OO_LAB4_VOETBAL_AANVALLER_H

#include <string>
#include "Speler.h"

using namespace std;

class Aanvaller : public Speler {
private:
    int aantalDoelpunten;
    int aantalSchotenOpDoel;
    int totaalAantalSchoten;
public:
    //CONSTRUCTOR
    Aanvaller();

    Aanvaller(string naam, int rugnummer);

    //DESTRUCTOR
    virtual ~Aanvaller();

    //GETTERS
    int getAantalDoelpunten() const;

    int getAantalSchotenOpDoel() const;

    int getTotaalAantalSchoten() const;

    //SETTERS
    void addActie(Actie *actie);

    void verwerkActie(Actie *actie);

    //OPERATOR
    friend ostream &operator<<(ostream &os, const Aanvaller &aanvaller);

};

#endif //OO_LAB4_VOETBAL_AANVALLER_H
