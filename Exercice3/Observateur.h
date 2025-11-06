#ifndef OBSERVATEUR_H
#define OBSERVATEUR_H

class Observateur {
public:
    virtual void mettreAJour(float temperature, float humidite, float pression) = 0;
    virtual ~Observateur() {}
};

#endif
