//
// Created by romeo on 8-11-2019.
//

#ifndef OO_LAB3_OVERERVING_DOKTER_ORTHOPEDIST_H
#define OO_LAB3_OVERERVING_DOKTER_ORTHOPEDIST_H

#include "dokter.h"

class Orthopedist : public Dokter {
private:
    string spec;
public:
    //CONSTRUCTOREN
    Orthopedist();

    Orthopedist(string specialiteit, string naam);

    Orthopedist(const Orthopedist &orthopedist)/*:Dokter(orthopedist)*/;

    // DESTRUCTOR

    //GETTERS
    string getSpecialiteit();

    //SETTERS
   /* void setSpecialiteit(string specialiteit);*/

    //SCHRIJVERS
    void schrijf();

    //OPERATORS
    Orthopedist &operator=(const Orthopedist &orthopedist);

    //METHODEN
    void opereerPatient(string patient);


    //EXTRAAAAAAA
    void raadpleeg(Dokter d);

    void raadpleeg(Dokter *d);

    void raadpleeg(Orthopedist o);

    void raadpleeg(Orthopedist *o);

};

#endif //OO_LAB3_OVERERVING_DOKTER_ORTHOPEDIST_H
