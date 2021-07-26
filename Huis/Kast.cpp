//
// Created by romeo on 19-1-2020.
//


#include "Kast.h"
//CONSTRUCTOREN_________________________________________________________________________________________________________
Kast::Kast(){
    cout<<"Kast Default Constructor"<<endl;
}
Kast::Kast(const Kast &k):Meubel(k) {
}
//DESTRUCTOR____________________________________________________________________________________________________________
Kast::~Kast() {
    cout<<"Kast deleted"<<endl;
}
//OPERATORS____________________________________________________________________________________________________________
Kast & Kast::operator=(const Kast & k) {
    if( this != &k){
        Meubel::operator=(k);
    }
    return *this;
}
//PRINTERS____________________________________________________________________________________________________________
void Kast::print()  {
    cout<<"Kast";
}