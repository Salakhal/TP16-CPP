#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Forme.h"

class Triangle : public Forme {
public:
    void afficher() const override {
        cout << "Je suis un triangle" << endl;
    }
};

#endif
