#include "StationMeteo.h"
#include <algorithm>

void StationMeteo::ajouterObservateur(Observateur* obs) {
    observateurs.push_back(obs);
}

void StationMeteo::supprimerObservateur(Observateur* obs) {
    observateurs.erase(std::remove(observateurs.begin(), observateurs.end(), obs), observateurs.end());
}

void StationMeteo::notifierObservateurs() {
    for (auto* obs : observateurs)
        obs->mettreAJour(temperature, humidite, pression);
}

void StationMeteo::setMesures(float temp, float hum, float pres) {
    temperature = temp;
    humidite = hum;
    pression = pres;
    notifierObservateurs();
}
