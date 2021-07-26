#include <iostream>
#include "Dokter.h"
#include "Orthopedist.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    /* Dokter d1;
     Dokter d2("Joske");
     Dokter d3(d2);


     string p1 = "Patient 1";
     string p2 = "Patient 2";
     string p3 = "Patient 3";
     string p4 = "Patient 4";

     cout << "Naam dokter d1= " << d1.getNaam() << endl;
     d1.setNaam("Rachid");
     d3.setNaam("Miriam");

     d1.onderzoekPatient(p1);
     d2.onderzoekPatient(p2);
     d3.onderzoekPatient(p3);


     Orthopedist o1;
     Orthopedist o2("spec2", "Piet");
     Orthopedist o3(o2);
     Orthopedist o4;

     cout << "Specialiteit dokter " << o1.getNaam() << " is " << o1.getSpecialiteit() << endl;
     o1.setNaam("Cruella");
     o1.setSpecialiteit("spec1");
     o3.setNaam("Barry");
     o3.setSpecialiteit("spec3");
     o4.setNaam("Tina");
     o4.setSpecialiteit("spec4");

     o1.onderzoekPatient(p1);
     o1.opereerPatient(p1);
     o2.onderzoekPatient(p2);
     o2.opereerPatient(p2);
     o3.onderzoekPatient(p3);
     o3.opereerPatient(p3);


     o4 = o1;
     o4.onderzoekPatient(p4);
     o4.opereerPatient(p4);
     cout << "Spec van dokter " << o4.getNaam() << " is " << o4.getSpecialiteit() << endl;
     o1.schrijf();
     o2.schrijf();
     o3.schrijf();
     o4.schrijf();
     */

    Dokter d1("Bart");
    Dokter d2("Cedric");
    Dokter* pd1 = new Dokter("Dirk");
    Dokter* pd2 = new Dokter("Ewan");
    Orthopedist o1("Knie","Fien");
    Orthopedist o2("rug","Griet");
    Orthopedist* po1 = new Orthopedist("hand","helen");
    Orthopedist* po2 = new Orthopedist("hand","ingrid");
    Dokter* pdo1 = new Orthopedist("hand","jana");
    Dokter* pdo2 = new Orthopedist("hand","Kim");
    //copy constructor za worden opgeroepen vanwege (Dokter d) -> verbetering (const Dokter &d)

    d1.raadpleeg(d2);
    d1.raadpleeg(pd2);
    o1.raadpleeg(d2);
    o1.raadpleeg(pd2);
    pd1->raadpleeg(d2);
    pd1->raadpleeg(pd2);
    po1->raadpleeg(d2);
    po1->raadpleeg(pd2);
    pdo1->raadpleeg(d2);
    pdo1->raadpleeg(pd2);

    d1.raadpleeg(o2);
    d1.raadpleeg(po2);
    o1.raadpleeg(o2);
    o1.raadpleeg(po2);
    pd1->raadpleeg(o2);
    pd1->raadpleeg(po2);
    po1->raadpleeg(o2);
    po1->raadpleeg(po2);
    pdo1->raadpleeg(o2);
    pdo1->raadpleeg(po2);

    d1.raadpleeg(pdo2);
    o1.raadpleeg(pdo2);
    pd1->raadpleeg(pdo2);
    po1->raadpleeg(pdo2);
    pdo1->raadpleeg(pdo2);

    delete pd1;
    delete pd2;
    delete po1;
    delete po2;
    delete pdo1;
    delete pdo2;


    return 0;
}