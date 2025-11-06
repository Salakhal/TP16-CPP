#include <iostream>
#include "Configuration.h"
using namespace std;

int main() {
    Configuration* config1 = Configuration::getInstance();
    config1->afficherParametres();

    cout << "\n--- Modification ---\n";
    config1->setUtilisateur("root");

    Configuration* config2 = Configuration::getInstance();
    config2->afficherParametres();

    if (config1 == config2)
        cout << "\nLes deux pointeurs designent la meme instance " << endl;
    else
        cout << "\nInstances différentes " << endl;

    return 0;
}
