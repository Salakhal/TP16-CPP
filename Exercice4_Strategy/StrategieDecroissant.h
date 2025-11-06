#ifndef STRATEGIE_DECROISSANT_H
#define STRATEGIE_DECROISSANT_H

#include "StrategieTri.h"
#include <algorithm>

class TriDecroissant : public StrategieTri {
public:
    void trier(std::vector<std::string>& data) override {
        std::sort(data.begin(), data.end(), std::greater<std::string>());
    }
};

#endif
