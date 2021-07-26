//
// Created by romeo on 19-1-2020.
//

#include "Stoel.h"
//CONSTRUCTOREN_________________________________________________________________________________________________________
Stoel::Stoel(){
    cout<<"Stoel Default Constructor"<<endl;
}
Stoel::Stoel(const Stoel &s):Meubel(s) {
}
//DESTRUCTOR____________________________________________________________________________________________________________
Stoel::~Stoel(){
    cout<<"Stoel deleted"<<endl;
}

//OPERATORS____________________________________________________________________________________________________________
Stoel Stoel::operator=(const Stoel & s) {
    if(this!= &s){
        Meubel::operator=(s);
    }
    return *this;
}
//PRINTERS____________________________________________________________________________________________________________
void Stoel::print()  {
    cout<<"Stoel    ";
}