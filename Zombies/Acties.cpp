//
// Created by romeo on 20-1-2020.
//

#include "Acties.h"
#include <iostream>
using namespace std;
void BeweegActie::schrijf(){
    cout << "speler verplaatst van " << van << " naar " << naar << std::endl;
    cout << "toestand speler:" << toestandSpeler;
}

void Vecht::schrijf(){
    cout << "speler met zombie gevochten, leeft nog = " << toestandSpeler.isLevend() << std::endl;
    cout << "toestand speler:" << toestandSpeler;
}

void NeemGeld::schrijf(){
    cout << hoeveel << " geld genomen " << std::endl;
    cout << "toestand speler:" << toestandSpeler;
}

void KoopZout::schrijf(){
    cout <<  aantalGekocht << " zout gekocht " << std::endl;
    cout << "toestand speler:" << toestandSpeler;
}
