//
// Created by romeo on 20-1-2020.
//

#include "Gebied.h"

//CONSTRUCTOREN_________________________________________________________________________________________________________
//DEFAULT CONSTRUCTOR
Gebied::Gebied() {
    hoogte = 5;
    breedte = 5;
    veld = new bool *[hoogte];
    for (int i = 0; i < hoogte; i++) {
        veld[i] = new bool[breedte];
    }
    //Random invullen van het veld
    for (int j = 0; j < breedte; ++j) {
        for (int k = 0; k < hoogte; ++k) {
            veld[j][k] = rand() % 2 == 1;
        }
    }
    cout << "CONSTRUCTOR gebied DEAFULT" << endl;
}

//NORMAL CONSTRUCTOR
Gebied::Gebied(int h, int b) : hoogte(h), breedte(b) {
    veld = new bool *[hoogte];
    for (int i = 0; i < hoogte; i++) {
        veld[i] = new bool[breedte];
    }
    //Random invullen van het veld
    for (int j = 0; j < h; ++j) {
        for (int k = 0; k < b; ++k) {
            veld[j][k] = rand() % 2 == 1;
        }
    }
    cout << "CONSTRUCTOR gebied NORMAL" << endl;
}

//COPY CONSTRUCTOR
Gebied::Gebied(const Gebied &g) : hoogte(g.hoogte), breedte(g.breedte) {
    veld = new bool *[hoogte];
    //veld INIT
    for (int i = 0; i < hoogte; i++) {
        veld[i] = new bool[breedte];
    }
    //veld copy
    for (int j = 0; j < g.breedte; ++j) {
        for (int k = 0; k < g.hoogte; ++k) {
            veld[j][k] = g.veld[j][k];
        }
    }
    cout << "CONSTRUCTOR gebied COPY" << endl;

}

//DESTRUCTOR____________________________________________________________________________________________________________
Gebied::~Gebied() {
    for (int i = 0; i < hoogte; ++i) {
        delete veld[i];
    }
    delete veld;
}

//FRIENDS_______________________________________________________________________________________________________________
ostream &operator<<(ostream &os, const Gebied &gebied) {
    os << "(Hoogte=" << gebied.hoogte << "/ Breedte=" << gebied.breedte << ")" << "\n";
    for (int i = 0; i < gebied.hoogte; ++i) {
        /* os << "[" << i << "]";*/
        for (int j = 0; j < gebied.breedte; ++j) {
            os << gebied.veld[i][j];
        }
        os << "\n";
    }
    return os;
}

Gebied operator*(const Gebied &g1, const Gebied &g2) {
    int M = g1.hoogte;
    int N = g1.breedte;
    int m = g2.hoogte;
    int n = g2.breedte;
    int H = max(M, m); //HOOGTE NIEUW GEBIED
    int B = max(N, n); // BREEDTE NIEUW GEBIED
    int h = min(M, m); //HOOGTE KLEINSTE GEBIED
    int b = min(N, n); // BREETDE KLEINSTE GEBDIED

    Gebied g(H, B);
    //VOLLEDIG GEBDIED INVULLEN met false
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < B; ++j) {
            g.veld[i][j] = false; //false indien ze NIET GELIJK zijn
        }
    }
    //DEELGEBIED INVULLEN
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < B; ++j) {
            if (g1.veld[i][j] == g2.veld[i][j]) {
                g.veld[i][j] = true; // enkel true indien ze GELIJK zijn
            }

        }
    }
    return g;
}

//OPERATORS_____________________________________________________________________________________________________________
Gebied &Gebied::operator=(const Gebied &g) {
    if (this != &g) {
        if (veld != nullptr) {
            delete[] veld;
        }
        Gebied::hoogte = g.hoogte;
        Gebied::breedte = g.breedte;
        //veld INIT
        for (int i = 0; i < g.hoogte; i++) {
            veld[i] = new bool[g.breedte];
        }
        //veld copy
        for (int i = 0; i < g.breedte; i++) {
            for (int j = 0; j < g.hoogte; j++) {
                veld[i][j] = g.veld[i][j];
            }
        }
    }
}