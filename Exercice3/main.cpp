#include "StationMeteo.h"
#include "Affichages.h"
#include <iostream>

int main() {
    StationMeteo station;

    AffichageTemperature tempDisplay;
    AffichageHumidite humDisplay;
    AffichagePression presDisplay;

    station.ajouterObservateur(&tempDisplay);
    station.ajouterObservateur(&humDisplay);
    station.ajouterObservateur(&presDisplay);

    std::cout << "\n--- Mise à jour 1 ---\n";
    station.setMesures(25.4, 60.2, 1013.1);

    std::cout << "\n--- Mise à jour 2 ---\n";
    station.setMesures(30.0, 45.0, 1008.5);

    return 0;
}
