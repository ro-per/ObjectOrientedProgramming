//
// Created by romeo on 8-11-2019.
//

#include "Dokter.h"

#include <iostream>

using namespace std;

//CONSTRUCTOREN
Dokter::Dokter() {
    Dokter::naam = "Naam ongekend";
    cout << "default dokter aangemaakt" << endl;
}

Dokter::Dokter(string naam) {
    Dokter::naam = naam;
    cout << "Dokter " << naam << " aangemaakt" << endl;

}

Dokter::Dokter(const Dokter &dokter) {
    Dokter::naam = dokter.naam;
    cout << "Dokter " << naam << " gekopieerd" << endl;

}

// DESTRUCTOR
Dokter::~Dokter() {
    cout << "Dokter " << naam << " verwijdert" << endl;
}

//GETTERS
string Dokter::getNaam() {
    return naam;
}

//SETTERS
/*
void Dokter::setNaam(string naamDokter) {
    cout << "Dokter " << naam << " wilt nu ";
    Dokter::naam = naamDokter;
    cout << naam << " genoemd worden." << endl;
}*/
//SCHRIJVERS
void Dokter::schrijf() {
    cout << "Naam: " << naam << endl;
}

//OPERATORS
Dokter &Dokter::operator=(const Dokter &dokter) {
    naam = dokter.naam;
    cout << "Copied dokter" << endl;
}

//METHODEN
void Dokter::onderzoekPatient(string patient) {
    cout << "Dokter " << naam << " onderzoekt patient " << patient << endl;

}

//EXTRAAAAAAA
void Dokter::raadpleeg(Dokter d) {
    cout << "raadpleeg in Dokter, met Dokter parameter" << endl;
    d.schrijf();
}

void Dokter::raadpleeg(Dokter *d) {
    cout << "raadpleeg in Dokter, met Dokter* parameter" << endl;
    d->schrijf();
}