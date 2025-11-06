#ifndef STATION_METEO_H
#define STATION_METEO_H

#include <vector>
#include "Observateur.h"

class StationMeteo {
private:
    std::vector<Observateur*> observateurs;
    float temperature;
    float humidite;
    float pression;

public:
    void ajouterObservateur(Observateur* obs);
    void supprimerObservateur(Observateur* obs);
    void notifierObservateurs();

    void setMesures(float temp, float hum, float pres);
};

#endif
