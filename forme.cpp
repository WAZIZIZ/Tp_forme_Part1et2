///////////////////////////////////////////////////////////
//  forme.cpp
//  Implementation of the Class CForme
//  Created on:      20-janv.-2026 10:20:36
//  Original author: Utilisateur
///////////////////////////////////////////////////////////

#include "forme.h"
#include <iostream> // Nécessaire pour l'affichage avec cout

CForme::CForme() {
    // Initialisation par défaut si nécessaire
    this->nom = "Inconnue";
}

CForme::~CForme() {
    // Destructeur
}

/** * Constructeur qui initialise le nom de la forme
 */
CForme::CForme(string _nom) {
    // On affecte la valeur du paramètre à l'attribut de la classe
    this->nom = _nom; 
}

/** * Affiche le nom de la forme
 */
void CForme::afficher() {
    // Affiche le nom sur la console 
    cout << "Nom de la forme : " << this->nom << endl;
}

double CForme::surface() {
    // Retourne 0 
    return 0;
}