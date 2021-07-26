//
// Created by romeo on 20-1-2020.
//

#include <iostream>
#include "Tegels.h"

void LegeTegel::teken(){
    std::cout << ".";
}

void ZombieTegel::teken(){
    if (dood) std::cout << "D";
    else std::cout << "Z";
}

void GeldTegel::teken(){
    if (bedrag == 0) std::cout << ".";
    else std::cout << "g";
}

void ZoutTegel::teken(){
    if (aantal == 0) std::cout << ".";
    else std::cout << "z";
}



