# TP16 – Patrons de Conception 

## Objectif du TP

Découvrir et appliquer plusieurs **patrons de conception (Design Patterns)** en C++ :

1. Singleton  
2. Factory Method  
3. Observer  
4. Strategy  

Chaque patron permet de résoudre un problème de conception spécifique tout en améliorant **maintenabilité**, **modularité** et **réutilisabilité** du code.

---
 ## Structure proposée pour TP16
 ```
TP16/
│
├── Exercice1/
│   ├── main.cpp
│   ├── Configuration.h
│   └── Configuration.cpp
│
├── Exercice2_/
│   ├── main.cpp
│   ├── Forme.h
│   ├── Cercle.h
│   ├── Carre.h
│   ├── Triangle.h
│   ├── FabriqueForme.h
│   └── FabriqueForme.cpp
│
├── Exercice3/
│   ├── main.cpp
│   ├── StationMeteo.h
│   ├── StationMeteo.cpp
│   ├── Observateur.h
│   └── Affichages.h
│
└── Exercice4_Strategy/
    ├── main.cpp
    ├── StrategieTri.h
    ├── StrategieCroissant.h
    ├── StrategieDecroissant.h
    ├── StrategieParLongueur.h
    └── GestionnaireTri.h


```

 ## Exercice 1 : Implémentation du patron **Singleton**

###  Objectif
L’objectif de cet exercice est d’implémenter le **patron de conception Singleton** en C++ pour gérer une **configuration globale** dans une application, afin de garantir qu’une seule instance de cette configuration existe pendant toute l’exécution du programme.

---

## Description du pattern Singleton

Le **pattern Singleton** permet de :
- Restreindre l’instanciation d’une classe à **une seule instance**.
- Fournir un **point d’accès global** à cette instance unique.

---

##  Spécifications de la classe `Configuration`

###  Attributs :
- `cheminFichier` : chemin du fichier de configuration  
- `utilisateur` : nom d’utilisateur  
- `motDePasse` : mot de passe  

###  Méthodes :
- `static Configuration* getInstance()` : retourne l’unique instance  
- `void afficherParametres()` : affiche les valeurs actuelles  
- `void setUtilisateur(const string& user)` : modifie l’utilisateur  

###  Contraintes :
- **Constructeur privé** pour empêcher l’instanciation directe.  
- **Suppression du constructeur de copie** et de l’opérateur d’affectation.  

---

## Sortie attendue
```
Chemin : config.txt
Utilisateur : admin
Mot de passe : 1234

--- Modification ---
Chemin : config.txt
Utilisateur : root
Mot de passe : 1234

Les deux pointeurs designent la meme instance 

```
##  Exemple d’exécution (image)
 
Voici un exemple de l'exécution du programme (screenshot) :

<img width="686" height="320" alt="image" src="https://github.com/user-attachments/assets/84609194-52ec-4188-964a-f90c08e95d1d" />


# Exercice 2 : Utilisation du patron **Fabrique (Factory Method)**

---

###  Objectif

Mettre en œuvre le **pattern Factory Method** pour créer dynamiquement des objets de types `Cercle`, `Carré` ou `Triangle`, sans modifier le code client.  
Ce patron permet d’isoler la logique de création d’objets dans une classe dédiée (la **Fabrique**).

---

##  Spécifications

###  Classe abstraite `Forme`
- Contient une méthode virtuelle pure `afficher()`.  
- Sert de base commune à toutes les formes.  

###  Classes concrètes
- `Cercle`, `Carre`, `Triangle` : héritent de `Forme` et implémentent la méthode `afficher()`.

###  Classe `FabriqueForme`
- Contient une méthode statique `creerForme(string type)` qui crée dynamiquement l’objet demandé.

---

## Sortie attendue

```
Type inconnu : etoile
Je suis un cercle
Je suis un carré
Je suis un triangle
```
##  Exemple d’exécution (image)
 
Voici un exemple de l'exécution du programme (screenshot) :

<img width="486" height="134" alt="image" src="https://github.com/user-attachments/assets/55e8c207-ec97-417a-989a-dba401312aaf" />


## Exercice 3 : Application du patron **Observateur (Observer)**

---

###  Objectif

Mettre en œuvre le **pattern Observateur** dans une application météo, où :
- la **StationMeteo** (le sujet) détient les données météo (température, humidité, pression),
- plusieurs **observateurs** (*Affichages*) sont notifiés automatiquement lorsque les données changent.

---

##  Classes et responsabilités

| Classe / Interface | Rôle |
|-------------------|------|
| `Observateur` | Interface avec la méthode `mettreAJour()`. |
| `StationMeteo` | Sujet : stocke les données météo et notifie les observateurs. |
| `AffichageTemperature` | Observateur concret : affiche la température. |
| `AffichageHumidite` | Observateur concret : affiche l’humidité. |
| `AffichagePression` | Observateur concret : affiche la pression. |

---
## Sortie attendue
```
--- Mise à jour 1 ---
[Affichage Température] : 25.4°C
[Affichage Humidité] : 60.2%
[Affichage Pression] : 1013.1 hPa

--- Mise à jour 2 ---
[Affichage Température] : 30°C
[Affichage Humidité] : 45%
[Affichage Pression] : 1008.5 hPa

```
##  Exemple d’exécution (image)
 
Voici un exemple de l'exécution du programme (screenshot) :

<img width="517" height="312" alt="image" src="https://github.com/user-attachments/assets/19808ef7-c7ef-4799-a3d1-dd6d00b6d8f0" />

# Exercice 4 : Mise en œuvre du patron Stratégie (Strategy)

##  Objectif
Trier dynamiquement un vecteur de chaînes avec plusieurs **stratégies** : croissant, décroissant, par longueur.


## Sortie attendue
```
Tri croissant : abricot banane figue kiwi pomme 
Tri décroissant : pomme kiwi figue banane abricot        
Tri par longueur : kiwi pomme figue banane abricot 

```
##  Exemple d’exécution (image)
 
Voici un exemple de l'exécution du programme (screenshot) :

<img width="734" height="107" alt="image" src="https://github.com/user-attachments/assets/cddb5fbc-5a64-44bc-8d7b-b46208af0b8d" />













