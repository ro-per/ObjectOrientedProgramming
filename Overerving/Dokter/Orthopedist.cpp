//
// Created by romeo on 8-11-2019.
//

#include "Orthopedist.h"
#include <iostream>

using namespace std;

//CONSTRUCTOREN
Orthopedist::Orthopedist() {
    spec = "spec ongekend";
    cout << "Specialiteit " << spec << " toegevoegd aan dokter " << naam << endl;
}

Orthopedist::Orthopedist(string specialiteit, string naam):Dokter(naam) {
    Orthopedist::spec = specialiteit;
    cout << "Specialiteit " << specialiteit << " toegevoegd aan dokter " << naam << endl;
}

Orthopedist::Orthopedist(const Orthopedist &orthopedist) : Dokter(orthopedist) {
    Orthopedist::spec = orthopedist.spec;
    cout << "Specialiteit " << spec << " gekopieerd naar dubbelganger dokter " << naam << endl;
}
// DESTRUCTOR

//GETTERS
string Orthopedist::getSpecialiteit() {
    return spec;
}

//SETTERS
/*
void Orthopedist::setSpecialiteit(string specialiteit) {
    cout << "(" << spec << ") van Dokter " << naam;
    Orthopedist::spec = specialiteit;
    cout << " heeft zich nu gespecialiseerd in " << spec << endl;
}
*/
//SCHRIJVERS
void Orthopedist::schrijf() {
    cout << "Naam: " << naam << "     Spec: " << spec << endl;
}

//OPERATORS
Orthopedist &Orthopedist::operator=(const Orthopedist &orthopedist) {
    Dokter::operator=(orthopedist);
    spec = orthopedist.spec;
    cout << "orthopedist asigned" << endl;
    cout << "don not asign same objects" << endl;
    return *this;
}

//METHODEN
void Orthopedist::opereerPatient(string patient) {
    cout << "Ortho " << naam << " opereert patient " << patient << endl;
}

//EXTRAAAAAAA
void raadpleeg(Dokter d) {
    cout << "raadpleeg in Orthopedist, met Dokter parameter" << endl;
    d.schrijf();
}

void raadpleeg(Dokter *d) {
    cout << "raadpleeg in Orthopedist, met Dokter* parameter" << endl;
    d->schrijf();
}

void raadpleeg(Orthopedist o) {
    cout << "raadpleeg in Orthopedist, met Orthopedist parameter" << endl;
    o.schrijf();
}

void raadpleeg(Orthopedist *o) {
    cout << "raadpleeg in Orthopedist, met Orthopedist* parameter" << endl;
    o->schrijf();
}