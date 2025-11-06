#ifndef GESTIONNAIRE_TRI_H
#define GESTIONNAIRE_TRI_H

#include "StrategieTri.h"
#include <vector>
#include <string>
#include <iostream>

class GestionnaireTri {
private:
    StrategieTri* strategie;

public:
    GestionnaireTri(StrategieTri* s = nullptr) : strategie(s) {}
    void setStrategie(StrategieTri* s) { strategie = s; }

    void trierEtAfficher(std::vector<std::string>& data) {
        if (strategie)
            strategie->trier(data);
        for (const auto& s : data)
            std::cout << s << " ";
        std::cout << "\n";
    }
};

#endif
