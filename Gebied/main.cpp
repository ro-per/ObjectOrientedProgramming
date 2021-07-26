#include <iostream>
#include "Gebied.h"
#include <string>
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main() {
    std::srand(std::time(0)); // current time as seed for generator
    Gebied g1; //5*5, random waarden
    Gebied g2(10, 4); //10*4, random waarden
    Gebied g3(g1);
    Gebied g4 = g2;

    cout << "--------------G1--------------" << endl;
    cout << g1 << endl;
    cout << "--------------G3--------------" << endl;
    cout << g3 << endl;
    cout << "--------------G4--------------" << endl;
    cout << g4 << endl;

    Gebied g5;
    g5 = g2 * g3; //gebied met grootste hoogte en breedte
    //overlappende deel: xor van waarden
    //deel van 1 gebied: waarde
    //overigen: false

    cout << "--------------G2--------------" << endl;
    cout << g2 << endl;
    cout << "--------------G3--------------" << endl;
    cout << g3 << endl;
    cout << "--------------G5--------------" << endl;
    cout << g5 << endl;

    return 0;
}