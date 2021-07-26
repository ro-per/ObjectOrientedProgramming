//
// Created by romeo on 20-1-2020.
//

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <algorithm>
#include "Spel.h"

using namespace std;

void Spel::initSpel(int aantal) {

    speler = new Speler();

    //eerste: lege tegel
    begintegel = new LegeTegel();
    tegels.push_back(begintegel);
    srand(time(0));

    for (int i = 1; i < aantal - 1; i++) {
        switch (rand() % 6) {
            case 0:
                temp = new LegeTegel();
                break;
            case 1:
                temp = new ZombieTegel();
                break;
            case 2:
                temp = new LegeTegel();
                break;
            case 3:
                temp = new ZoutTegel(rand() % 20 + 2);
                break;
            case 4:
                temp = new LegeTegel();
                break;
            case 5:
                temp = new ZoutTegel(rand() % 20 + 5);
                break;
        }
        tegels.push_back(temp);
    }
    //laatste: lege tegel
    eindtegel = new LegeTegel();
    tegels.push_back(eindtegel);

    int aantalZombieTegels;
    //TODO
    if (!any_of(tegels.begin(), tegels.end(), [&aantalZombieTegels](auto t) {

        std::cout << "geen ZombieTegel" << std::endl;

    }))
        return;

    initSpel(aantal);
}

void Spel::teken() {
// teken tegels uit op 1 lijn
    for (tegelIt = tegels.begin(); tegelIt != tegels.end(); tegelIt++) {
        (**tegelIt).teken();
    }
// teken de positie van de speler X
    speler->getPositie();
    for (int i = 0; i < speler->getPositie(); ++i) {
        cout << " ";
    }
    cout << "X" << endl;
}

void Spel::schrijfResultaat() {
    std::cout << "spel is gestopt." << std::endl;
    std::cout << speler << std::endl;
}

void Spel::stapVooruit() {
    if (speler->setPositie(speler->getPositie() + 1, tegels.size())) {
        speler->vooruit();
    }
}

void Spel::stapAchteruit() {
    if (speler->setPositie(speler->getPositie() + 1, tegels.size())) {
        speler->achterruit();
    }
}

void Spel::spring() {
    srand(time(0));
    int stap = (rand() % 6) - 3;

}

void Spel::koopZout() {
//koop zoveel mogelijk zout, hoeveelheid zout op tegel verminderd!


}

void Spel::replay() {
    for (actieIt = acties.begin(); actieIt != acties.end(); actieIt++) {
        (**actieIt).schrijf();
    }
}

void Spel::opkuisen() {
    delete begintegel;
    delete eindtegel;
    delete speler;
    delete temp;
}





