#include <iostream>
#include <vector>
#include "StrategieCroissant.h"
#include "StrategieDecroissant.h"
#include "StrategieParLongueur.h"
#include "GestionnaireTri.h"

int main() {
    std::vector<std::string> mots = {"banane", "pomme", "kiwi", "abricot", "figue"};

    TriCroissant croissant;
    TriDecroissant decroissant;
    TriParLongueur parLongueur;

    GestionnaireTri gestionnaire;

    std::cout << "Tri croissant : ";
    gestionnaire.setStrategie(&croissant);
    gestionnaire.trierEtAfficher(mots);

    std::cout << "Tri décroissant : ";
    gestionnaire.setStrategie(&decroissant);
    gestionnaire.trierEtAfficher(mots);

    std::cout << "Tri par longueur : ";
    gestionnaire.setStrategie(&parLongueur);
    gestionnaire.trierEtAfficher(mots);

    return 0;
}
