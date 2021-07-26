#include <iostream>
#include "Spel.h"

int getInvoer(){
    int waarde;
    std::cout << "mogelijk invoer:" << std::endl;
    std::cout << "0: stop" << std::endl;
    std::cout << "1: 1 stap vooruit" << std::endl;
    std::cout << "2: 1 stap achteruit" << std::endl;
    std::cout << "3: 1 willekeurige sprong ([-3,3])" << std::endl;
    std::cout << "4: zout kopen" << std::endl;
    std::cin >> waarde;
    return waarde;
}

int main() {
    int keuze = 0;

    std::cout << "Welkom to 1-dim zombie world" << std::endl;
    Spel spel;
    spel.initSpel(40);
    do {
        spel.teken();
        keuze = getInvoer();
        switch (keuze){
            case 0: spel.schrijfResultaat(); break;
            case 1: spel.stapVooruit(); break;
            case 2: spel.stapAchteruit(); break;
            case 3: spel.spring(); break;
            case 4: spel.koopZout(); break;
            default: std::cout << "ongeldige keuze" << std::endl;
        }
        if (spel.isGedaan()) {
            spel.schrijfResultaat();
            keuze = 0;
        }
    } while (keuze!=0);

    spel.replay();
    spel.opkuisen();

    return 0;
}