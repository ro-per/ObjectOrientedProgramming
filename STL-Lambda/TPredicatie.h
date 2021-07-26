//
// Created by romeo on 6-12-2019.
//

#ifndef OO_LAB5_STL_LAMBDA_TPREDICATIE_H
#define OO_LAB5_STL_LAMBDA_TPREDICATIE_H

#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std;

template<class T>
class TPredicatie {
    T waarde;
public:
    TPredicatie(T w) { waarde = w; }

    //bool operator()(T w) { if (w == waarde) return true; else return false; }
    bool operator()(T w) { return w % waarde == 0; }

};

template<class Titerator, class T>
Titerator vindAls(Titerator start, Titerator eind, TPredicatie<T> predicatie) {
    while ((start != eind) && (!predicatie(*start))) start++;
    return start;
}

template<class Titerator>
Titerator vindAlsLambda(Titerator start, Titerator eind, std::function<bool(string)> predicatie) {
    while ((start != eind) && (!predicatie(*start))) start++;
    return start;
}

template<class Titerator, class T>
int telAls(Titerator start, Titerator eind, TPredicatie<T> predicatie) {
    int counter=0;
    while (start != eind) {
        if (predicatie(*start)){
            counter++;
        }
        start++;
    }
    return counter;
}

template<class Titerator>
int telAlsLambda(Titerator start, Titerator eind, std::function<bool(int)> predicatie) {
    int counter=0;
    while (start != eind) {
        if (predicatie(*start)){
            counter++;
        }
        start++;
    }
    return counter;
}


#endif //OO_LAB5_STL_LAMBDA_TPREDICATIE_H
