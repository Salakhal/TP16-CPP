#include "FabriqueForme.h"
#include "Cercle.h"
#include "Carre.h"
#include "Triangle.h"

Forme* FabriqueForme::creerForme(const string& type) {
    if (type == "cercle")
        return new Cercle();
    else if (type == "carre")
        return new Carre();
    else if (type == "triangle")
        return new Triangle();
    else {
        cout << "Type inconnu : " << type << endl;
        return nullptr;
    }
}
