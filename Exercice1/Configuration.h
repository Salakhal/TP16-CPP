#ifndef CONFIGURATION_H
#define CONFIGURATION_H

#include <string>
using namespace std;

class Configuration {
private:
    string cheminFichier;
    string utilisateur;
    string motDePasse;

    static Configuration* instance;

    // Constructeur privé
    Configuration();

    // Suppression du constructeur de copie et d’affectation
    Configuration(const Configuration&) = delete;
    Configuration& operator=(const Configuration&) = delete;

public:
    static Configuration* getInstance();
    void afficherParametres() const;
    void setUtilisateur(const string& user);
};

#endif
