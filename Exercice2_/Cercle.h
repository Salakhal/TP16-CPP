#ifndef CERCLE_H
#define CERCLE_H

#include "Forme.h"

class Cercle : public Forme {
public:
    void afficher() const override {
        cout << "Je suis un cercle " << endl;
    }
};

#endif
