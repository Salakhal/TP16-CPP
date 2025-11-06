#ifndef STRATEGIE_TRI_H
#define STRATEGIE_TRI_H

#include <vector>
#include <string>

class StrategieTri {
public:
    virtual void trier(std::vector<std::string>& data) = 0;
    virtual ~StrategieTri() {}
};

#endif
