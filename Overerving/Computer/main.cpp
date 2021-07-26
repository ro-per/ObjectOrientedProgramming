#include <iostream>
#include "Onderdeel.h"
#include "Moederbord.h"
#include "Videokaart.h"
#include "Harddisk.h"
#include "Computer.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    cout << "ONDERDELEN ____________________________________" << endl;
    Onderdeel *o1 = new Onderdeel();
    Onderdeel *o2 = new Onderdeel("Test Onderdeel", 200);
    cout << o1->getNaam() << o1->getPrijs() << endl;

    o2->instaleer();
    o1->print();
    o2->print();

    cout << "MOEDERBORDEN ____________________________________" << endl;
    Moederbord *m1 = new Moederbord();
    Moederbord *m2 = new Moederbord(5, "water", "ASUS", 6000);
    cout << m2->getPrijs() << m2->getNaam() << m2->getAansluitingen() << m2->getKoeling() << endl;

    m2->instaleer();
    m1->print();
    m2->print();

    cout << "VIDEOKAARTEN ____________________________________" << endl;
    Videokaart *v1 = new Videokaart();
    Videokaart *v2 = new Videokaart(2000, "gaming", "NVIDIA", 500);
    cout << v2->getPrijs() << v2->getNaam() << v2->getMHz() << v2->getGebruik() << endl;

    v2->instaleer();
    v1->print();
    v2->print();

    cout << "HARDDISKS ____________________________________" << endl;
    Harddisk *d1 = new Harddisk();
    Harddisk *d2 = new Harddisk(500, "SSD", "seagate", 80);
    cout << d2->getPrijs() << d2->getNaam() << d2->getCapaciteit() << d2->getSoort() << endl;

    d2->instaleer();
    d1->print();
    d2->print();

    cout << "COMPUTER ____________________________________" << endl;
    Computer c(m2,v2,d2);
    c.print();

    return 0;
}