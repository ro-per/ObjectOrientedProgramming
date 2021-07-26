#include <iostream>
#include <vector>
#include <string>
#include "TPredicatie.h"

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    /*
    vector<string> namen;
    namen.push_back("Jos");
    namen.push_back("Angelica");
    namen.push_back("Kurt");
    namen.push_back("Bob");

    string s = "Angelica";
    string res;
    TPredicatie<string> predicatie_string(s);
    //NORMAAL
    res = *find_if(namen.begin(), namen.end(), predicatie_string);
    cout << res << endl;
    //LAMBDA
    res = *find_if(namen.begin(), namen.end(), [s](string t) { if (s == t) return true; else return false; });
    cout << res << endl;

    //NORMAAL
    res = *vindAls(namen.begin(), namen.end(), predicatie_string);
    cout << res << endl;

    //LAMBDA 1
    res = *vindAlsLambda(namen.begin(), namen.end(),
                         [](string s) { if (s == "Jessica")return true; else return false; });
    cout << res << endl;
    //LAMBDA 2
    res = *vindAlsLambda(namen.begin(), namen.end(), [s](string t) { if (s == t)return true; else return false; });
    cout << res << endl;
    */

    vector<int> lijstje;
    lijstje.push_back(20);
    lijstje.push_back(11);
    lijstje.push_back(12);
    lijstje.push_back(20);
    lijstje.push_back(48);
    lijstje.push_back(555);
    lijstje.push_back(45);

   int ingelezen = 5;

    int resultaat;
    TPredicatie<int> predicatie_int(ingelezen);


    //NORMAAL
    resultaat = count_if(lijstje.begin(), lijstje.end(), predicatie_int);
    cout << resultaat << endl;
    //LAMBDA
    resultaat = count_if(lijstje.begin(), lijstje.end(), [ingelezen](int t) { return t % ingelezen == 0; });
    cout << resultaat << endl;

    //NORMAAL
    resultaat = telAls(lijstje.begin(), lijstje.end(), predicatie_int);
    cout << resultaat << endl;


    //LAMBDA 1
    resultaat = telAlsLambda(lijstje.begin(), lijstje.end(),
                             [](int t) { if (t % 5 == 0)return true; else return false; });
    cout << resultaat << endl;
    //LAMBDA 2
    resultaat = telAlsLambda(lijstje.begin(), lijstje.end(), [ingelezen](int t) { return t % ingelezen == 0; });
    cout << resultaat << endl;
    return 0;

}