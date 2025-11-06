#ifndef CARRE_H
#define CARRE_H

#include "Forme.h"

class Carre : public Forme {
public:
    void afficher() const override {
        cout << "Je suis un carré " << endl;
    }
};

#endif
