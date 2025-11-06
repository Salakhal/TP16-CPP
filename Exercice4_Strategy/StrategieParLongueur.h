#ifndef STRATEGIE_PAR_LONGUEUR_H
#define STRATEGIE_PAR_LONGUEUR_H

#include "StrategieTri.h"
#include <algorithm>

class TriParLongueur : public StrategieTri {
public:
    void trier(std::vector<std::string>& data) override {
        std::sort(data.begin(), data.end(),
                  [](const std::string& a, const std::string& b) {
                      return a.length() < b.length();
                  });
    }
};

#endif
