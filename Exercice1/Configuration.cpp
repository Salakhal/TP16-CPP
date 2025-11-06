#include "Configuration.h"
#include <iostream>
using namespace std;

// Initialisation du pointeur statique
Configuration* Configuration::instance = nullptr;

// Constructeur privé
Configuration::Configuration() {
    cheminFichier = "config.txt";
    utilisateur = "admin";
    motDePasse = "1234";
}

// Méthode statique pour obtenir l’unique instance
Configuration* Configuration::getInstance() {
    if (instance == nullptr) {
        instance = new Configuration();
    }
    return instance;
}

// Afficher les paramètres
void Configuration::afficherParametres() const {
    cout << "Chemin : " << cheminFichier << endl;
    cout << "Utilisateur : " << utilisateur << endl;
    cout << "Mot de passe : " << motDePasse << endl;
}

// Modifier l’utilisateur
void Configuration::setUtilisateur(const string& user) {
    utilisateur = user;
}
