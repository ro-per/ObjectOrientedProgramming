//
// Created by romeo on 8-11-2019.
//

#ifndef OO_LAB3_OVERERVING_DOKTER_DOKTER_H
#define OO_LAB3_OVERERVING_DOKTER_DOKTER_H

#include <string>

using namespace std;

class Dokter {
protected:
    string naam;
public:
    //CONSTRUCTOREN
    Dokter();

    Dokter(string naam);

    Dokter(const Dokter &dokter);

    // DESTRUCTOR
    virtual ~Dokter();

    //GETTERS
    string getNaam();

    //SETTERS
    /*void setNaam(string naamDokter);*/

    //SCHRIJVERS
    void schrijf();
    //OPERATORS
    Dokter &operator=(const Dokter &dokter);
    //METHODEN
    void onderzoekPatient(string patient);

    //EXTRAAAAAAA
    void raadpleeg(Dokter d);
    void raadpleeg(Dokter* d);
};


#endif //OO_LAB3_OVERERVING_DOKTER_DOKTER_H
