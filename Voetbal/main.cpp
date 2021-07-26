#include <iostream>
#include <string>
#include <algorithm>
#include "Actie.h"
#include "loopActie.h"
#include "pasActie.h"
#include "schietActie.h"
#include "vangActie.h"
#include "tackleActie.h"
#include "voorzetActie.h"
#include "Speler.h"
#include "Aanvaller.h"
#include "Middenvelder.h"
#include "Verdediger.h"
#include "Keeper.h"
#include "Team.h"

using namespace std;

int main() {
    Team *RedDevils = new Team("Rode Duivels");
    //_______________________________ AANMAKEN SPELERS _______________________________
    //KEEPERS
    Keeper *k1 = new Keeper("Courtois", 1);
    RedDevils->voegSpelerToe(k1);
    Keeper *k2 = new Keeper("Casteels", 2);
    RedDevils->voegSpelerToe(k2);

    //VERDEDIGERS
    Verdediger *v1 = new Verdediger("Kompany", 3);
    RedDevils->voegSpelerToe(v1);
    Verdediger *v2 = new Verdediger("Meunier", 4);
    RedDevils->voegSpelerToe(v2);

    //MIDDENVELDER
    Middenvelder *m1 = new Middenvelder("Chadli", 5);
    RedDevils->voegSpelerToe(m1);
    Middenvelder *m2 = new Middenvelder("Witsel", 6);
    RedDevils->voegSpelerToe(m2);

    //AANVALLER
    Aanvaller *a1 = new Aanvaller("Hazard", 7);
    RedDevils->voegSpelerToe(a1);
    Aanvaller *a2 = new Aanvaller("Mertens", 8);
    RedDevils->voegSpelerToe(a2);

    //_______________________________ ACTIES TOEVOEGEN _______________________________
    //KEEPERS
    //k1 (3ptn totaal)
    k1->addActie(new loopActie(1, 5)); // +5ptn

    k1->addActie(new pasActie(2, true)); //+5ptn
    k1->addActie(new pasActie(3, false)); //-3ptn

    k1->addActie(new vangActie(4, false)); //-20ptn
    k1->addActie(new vangActie(5, true)); //+8ptn
    k1->addActie(new vangActie(6, true)); //+8ptn
    //k2 (33ptn totaal)
    k2->addActie(new loopActie(7, 20)); // +20ptn
    k2->addActie(new loopActie(8, 10)); // +10ptn
    k2->addActie(new loopActie(9, 45)); // +45ptn

    k2->addActie(new pasActie(10, true)); //+5ptn
    k2->addActie(new pasActie(11, false)); //-3ptn

    k2->addActie(new vangActie(12, false)); //-20ptn
    k2->addActie(new vangActie(13, false)); //-20ptn
    k2->addActie(new vangActie(14, false)); //-20ptn
    k2->addActie(new vangActie(15, true)); //+8ptn
    k2->addActie(new vangActie(16, true)); //+8ptn

    //VERDEDIGERS
    //v1 (-4ptn totaal)
    v1->addActie(new loopActie(17, 4)); // +4ptn

    v1->addActie(new pasActie(18, false)); //-4ptn
    v1->addActie(new pasActie(19, false)); //-4ptn

    v1->addActie(new tackleActie(20, false)); //+20ptn
    v1->addActie(new tackleActie(21, true)); //-10ptn
    v1->addActie(new tackleActie(22, true)); //-10ptn

    //v2 (81ptn totaal)
    v2->addActie(new loopActie(23, 7)); // 20/5 = +7ptn
    v2->addActie(new loopActie(24, 20)); // 20/5 = +20ptn
    v2->addActie(new loopActie(25, 11)); // 20/5 = +11ptn

    v2->addActie(new pasActie(26, true)); //+7ptn
    v2->addActie(new pasActie(27, false)); //-4ptn

    v2->addActie(new tackleActie(28, false)); //+20ptn
    v2->addActie(new tackleActie(29, false)); //+20ptn
    v2->addActie(new tackleActie(30, false)); //+20ptn
    v2->addActie(new tackleActie(31, true)); //-10ptn
    v2->addActie(new tackleActie(31, true)); //-10ptn

    //MIDDENVELDER
    //m1 (78ptn totaal)
    m1->addActie(new loopActie(32, 20)); // +20ptn

    m1->addActie(new pasActie(33, true)); //+10ptn
    m1->addActie(new pasActie(34, false)); //-2ptn

    m1->addActie(new voorzetActie(35, false)); //-10ptn
    m1->addActie(new voorzetActie(36, true)); //+30ptn
    m1->addActie(new voorzetActie(37, true)); //+30ptn

    //m2 (76ptn totaal)
    m2->addActie(new loopActie(38, 7)); //+7ptn
    m2->addActie(new loopActie(39, 20)); //+20ptn
    m2->addActie(new loopActie(40, 11)); //+11ptn

    m2->addActie(new pasActie(41, true)); //+10ptn
    m2->addActie(new pasActie(42, false)); //-2ptn

    m2->addActie(new voorzetActie(43, false)); //-10ptn
    m2->addActie(new voorzetActie(44, false)); //-10ptn
    m2->addActie(new voorzetActie(45, false)); //-10ptn
    m2->addActie(new voorzetActie(46, true)); //+30ptn
    m2->addActie(new voorzetActie(47, true)); //+30ptn

    //AANVALLER
    //a1 (67 ptn totaal)
    a1->addActie(new loopActie(48, 30)); // +30ptn

    a1->addActie(new pasActie(49, true)); //+20ptn
    a1->addActie(new pasActie(50, false)); //-8ptn

    a1->addActie(new schietActie(51, false, false)); //-20ptn
    a1->addActie(new schietActie(52, true, false)); //+5ptn
    a1->addActie(new schietActie(53, true, true)); //+40ptn

    //a2 (60 ptn totaal)
    a2->addActie(new loopActie(54, 7)); //+7ptn
    a2->addActie(new loopActie(55, 20)); //+20ptn
    a2->addActie(new loopActie(56, 11)); //+11ptn

    a2->addActie(new pasActie(57, true)); //+20ptn
    a2->addActie(new pasActie(58, false)); //-8ptn

    a2->addActie(new schietActie(59, false, false)); //-20ptn
    a2->addActie(new schietActie(60, true, false)); //+5ptn
    a2->addActie(new schietActie(61, false, false)); //-20ptn
    a2->addActie(new schietActie(62, true, false)); //+5ptn
    a2->addActie(new schietActie(63, true, true)); //+40ptn
    a2->addActie(new schietActie(64, false, true)); //0ptn

    cout << "__________________ PRINT TEAM UIT __________________" << endl;
    RedDevils->printTeam();

    cout << "__________________ SORTEER HET TEAM OP AANTAL PUNTEN __________________" << endl;
    RedDevils->sorteerTeam();
    RedDevils->printTeam();

    cout << "__________________ PRINT DE BESTE SPELERS UIT __________________" << endl;
    RedDevils->maakSelectie(1, 2, 1, 2);
    RedDevils->printSelectie();


    return 0;
}
