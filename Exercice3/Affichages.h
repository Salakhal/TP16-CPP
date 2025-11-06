#ifndef AFFICHAGES_H
#define AFFICHAGES_H

#include "Observateur.h"
#include <iostream>
#include <string>

class AffichageTemperature : public Observateur {
public:
    void mettreAJour(float temperature, float, float) override {
        std::cout << "[Affichage Température] : " << temperature << "°C\n";
    }
};

class AffichageHumidite : public Observateur {
public:
    void mettreAJour(float, float humidite, float) override {
        std::cout << "[Affichage Humidité] : " << humidite << "%\n";
    }
};

class AffichagePression : public Observateur {
public:
    void mettreAJour(float, float, float pression) override {
        std::cout << "[Affichage Pression] : " << pression << " hPa\n";
    }
};

#endif
