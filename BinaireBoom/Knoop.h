//
// Created by romeo on 10-12-2019.
//

#ifndef OO_LAB6_BINAIREBOOM_KNOOP_H
#define OO_LAB6_BINAIREBOOM_KNOOP_H

#include <memory>

using namespace std;

class Knoop {
public:
    int waarde;
    shared_ptr<Knoop> links = nullptr, rechts = nullptr;
    weak_ptr<Knoop> ouder;

    Knoop(int waarde) : waarde(waarde) {
        cout << "knoop "<< waarde << " gemaakt" << endl;
    }
    ~Knoop(){
        cout << "knoop "<< waarde << " verwijdert" << endl;
    }
    friend class Boom;
};


#endif //OO_LAB6_BINAIREBOOM_KNOOP_H
