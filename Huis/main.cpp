#include <iostream>
#include "Huis.h"
#include "Slaapkamer.h"
#include "Bed.h"
#include "Kast.h"
#include "Stoel.h"
#include "Kelder.h"
#include "Keuken.h"

#define KASTEN 1;
#define BEDDEN 2;
#define STOELEN 3;

int main() {
    // HUIS AANMAKEN / TEAM / FRUITSCHAAL
    Huis *phuis = new Huis("Lokeren 9160");

    //KAMERS AANMAKEN / SPELERS / FRUIT
    Slaapkamer *pSlaapkamer1 = new Slaapkamer();
    Slaapkamer *pSlaapkamer2 = new Slaapkamer();

    Kelder *pKelder = new Kelder();

    Keuken *pKeuken = new Keuken();

    //KAMERS TOEVOEGEN AAN HET HUIS / SPELERS IN TEAM / FRUIT IN FRUITSCHAAL
    phuis->voegKamerToe(pSlaapkamer1);
    phuis->voegKamerToe(pSlaapkamer2);
    phuis->voegKamerToe(pKeuken);
    phuis->voegKamerToe(pKelder);

    //MEUBELS AANMAKEN / ACTIES / ???
    Kast *pKast1 = new Kast();
    pKast1->setPrijs(100);

    Stoel *pStoel1 = new Stoel();
    pStoel1->setPrijs(10);

    Bed *pBed1 = new Bed();
    pBed1->setPrijs(500);
    Bed *pBed2 = new Bed();
    pBed2->setPrijs(800);
    //TOEVOEGEN VAN MEUBELS AAN KAMERS / ACTIES AAN SPELERS
    pSlaapkamer1->voegMeubelToe(pBed1);
    pSlaapkamer1->voegMeubelToe(pBed2);
    pSlaapkamer1->voegMeubelToe(pBed1);

    pSlaapkamer2->voegMeubelToe(pBed1);
    pSlaapkamer2->voegMeubelToe(pKast1);
    pSlaapkamer2->voegMeubelToe(pStoel1);

    pKelder->voegMeubelToe(pStoel1);

    pKeuken->voegMeubelToe(pKast1);
    pKeuken->voegMeubelToe(pStoel1);


    pKelder->voegMeubelToe(pKast1);

    phuis->schrijfKamers();
    phuis->voegSlaapkamersToe();
    phuis->berekenTotalePrijs();

    pSlaapkamer1->verwijderMeubel(pBed1);
    pSlaapkamer1->verwijderMeubel(pBed2);
    pSlaapkamer1->verwijderMeubel(pBed1);
    pSlaapkamer1->verwijderMeubel(pStoel1);

    phuis->berekenTotalePrijs();
    phuis->schrijfKamers();
    phuis->voegSlaapkamersToe();


    delete phuis;
    delete pSlaapkamer1;
    delete pSlaapkamer2;
    delete pKelder;
    delete pKeuken;
    delete pKast1;
    delete pBed1;
    delete pBed2;
    delete pStoel1;
    return 0;

}
