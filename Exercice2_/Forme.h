#ifndef FORME_H
#define FORME_H

#include <iostream>
using namespace std;

class Forme {
public:
    virtual void afficher() const = 0; // Méthode abstraite
    virtual ~Forme() {} // Destructeur virtuel
};

#endif
