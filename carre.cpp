///////////////////////////////////////////////////////////
//  carre.cpp
//  Implementation of the Class CCarre
//  Created on:      20-janv.-2026 10:11:05
//  Original author: Utilisateur
///////////////////////////////////////////////////////////

#include "carre.h"
#include <iostream>

/**
 * Constructeur : transmet "Carre" comme nom et 'cote' pour largeur ET longueur
 * au constructeur de CCRectangle.
 */
CCarre::CCarre(int cote)
    : CCRectangle("Carre", cote, cote) {
   
}

/**
 * Affichage spécifique
 */
void CCarre::afficher() {
    // On peut appeler directement la méthode de CForme pour le nom
    CForme::afficher();
    std::cout << "Type : Carre" << std::endl;
}