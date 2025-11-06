#ifndef STRATEGIE_CROISSANT_H
#define STRATEGIE_CROISSANT_H

#include "StrategieTri.h"
#include <algorithm>

class TriCroissant : public StrategieTri {
public:
    void trier(std::vector<std::string>& data) override {
        std::sort(data.begin(), data.end());
    }
};

#endif
