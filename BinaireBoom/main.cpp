#include <iostream>
#include "Boom.h"

int main() {
    std::cout << "Hello, World!!" << std::endl;

    Boom boom1;

    //TOEVOEGEN
    boom1.voegToe(10);
    boom1.voegToe(7);
    boom1.voegToe(20);
    boom1.voegToe(4);
    boom1.voegToe(15);
    boom1.voegToe(23);
    boom1.voegToe(2);
    boom1.voegToe(6);
    boom1.voegToe(22);

    //boom1.voegToe(7);


    //SCHRIJVEN
    boom1.schrijfInOrder();

    //VERWIJDEREN
    boom1.verwijder(7);
    boom1.schrijfInOrder();
    boom1.verwijder(20);
    boom1.schrijfInOrder();
    boom1.verwijder(10);
    boom1.schrijfInOrder();


    return 0;
}



