#ifndef FABRIQUEFORME_H
#define FABRIQUEFORME_H

#include "Forme.h"
#include <string>
using namespace std;

class FabriqueForme {
public:
    static Forme* creerForme(const string& type);
};

#endif
