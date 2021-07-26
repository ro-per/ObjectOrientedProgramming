//
// Created by romeo on 9-11-2019.
//

#ifndef OO_LAB3_OVERERVING_COMPUTER_VIDEOKAART_H
#define OO_LAB3_OVERERVING_COMPUTER_VIDEOKAART_H

#include <string>
#include "Onderdeel.h"

using namespace std;

class Videokaart : public Onderdeel {
private:
    int MHz;
    string gebruik;
public:
    //CONSTRUCTOREN
    Videokaart();

    Videokaart(int MHz, string gebruik, string naam, int prijs);

    //DESTRUCTOR

    //GETTERS
    int getMHz();

    string getGebruik();

    //SCHRIJVERS
    void print();

};

#endif //OO_LAB3_OVERERVING_COMPUTER_VIDEOKAART_H
