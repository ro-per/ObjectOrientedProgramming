//
// Created by romeo on 20-1-2020.
//

#ifndef OO_GEBIED_H
#define OO_GEBIED_H

#include <iostream>

using namespace std;

class Gebied {
private:
    int hoogte, breedte;
    bool **veld;
public:
    //CONSTRUCTOREN_________________________________________________________________________________________________________
    //DEFAULT CONSTRUCTOR
    Gebied();

    //NORMAL CONSTRUCTOR
    Gebied(int h, int b);

    //COPY CONSTRUCTOR
    Gebied(const Gebied &g);

//DESTRUCTOR____________________________________________________________________________________________________________
    virtual ~Gebied();

//FRIENDS_______________________________________________________________________________________________________________
    friend ostream &operator<<(ostream &os, const Gebied &gebied);

    friend Gebied operator*(const Gebied &g1, const Gebied &g2);

//OPERATORS_____________________________________________________________________________________________________________
    Gebied &operator=(const Gebied &g);


};

#endif //OO_GEBIED_H
