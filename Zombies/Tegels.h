//
// Created by romeo on 20-1-2020.
//

#ifndef EXAMEN_OO_ZOMBIE_ROMEO_PERMENTIER_TEGELS_H
#define EXAMEN_OO_ZOMBIE_ROMEO_PERMENTIER_TEGELS_H
#include <cstring>
using namespace std;


class Tegel{
private:
public:
    virtual void teken();
Tegel();
};


class LegeTegel:public Tegel{
public:
    void teken();
    LegeTegel():Tegel(){};
};


class ZombieTegel:Tegel{
    bool dood;
public:
    void teken();

    bool isZombie(){
        return (strstr(typeid(*this).name(), "ZombieTegel") != nullptr);
    }
    void doden(){
        dood=true;
        cout << "zombie gedood" << endl;
    }
    ZombieTegel(){
        dood=false;
    }

};
class GeldTegel:Tegel{
    int bedrag;
public:
    void teken();
    GeldTegel(int x){
        bedrag=x;
    }
};
class ZoutTegel:Tegel{
    int aantal;
public:
    void teken();
    ZoutTegel(int x){
        aantal=x;
    }

};
#endif //EXAMEN_OO_ZOMBIE_ROMEO_PERMENTIER_TEGELS_H
