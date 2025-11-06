#include <iostream>
#include "FabriqueForme.h"
using namespace std;

int main() {
    Forme* f1 = FabriqueForme::creerForme("cercle");
    Forme* f2 = FabriqueForme::creerForme("carre");
    Forme* f3 = FabriqueForme::creerForme("triangle");
    Forme* f4 = FabriqueForme::creerForme("etoile"); // type inconnu

    
    if (f1) f1->afficher();
    if (f2) f2->afficher();
    if (f3) f3->afficher();
    if (f4) f4->afficher();

    // Libération mémoire
    delete f1;
    delete f2;
    delete f3;
    delete f4;

    return 0;
}
