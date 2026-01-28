///////////////////////////////////////////////////////////
//  OctogoneRegulier.cpp
//  Implementation of the Class OctogoneRegulier
//  Created on:      20-janv.-2026 10:20:48
//  Original author: Utilisateur
///////////////////////////////////////////////////////////

#include "octogoneRegulier.h"
#include <iostream>
#include <cmath> // Pour la fonction sqrt() (racine carrée)

/**
 * Constructeur 
 */
COctogoneRegulier::COctogoneRegulier(string nom, int cote)
    : CForme(nom) {
    this->m_cote = cote;
}

/**
 * Affichage 
 */
void COctogoneRegulier::afficher() {
    CForme::afficher();
    std::cout << "Type : Octogone Regulier" << std::endl;
    std::cout << "Cote : " << m_cote << std::endl;
}

/**
 * Formule : 2 * (1 + sqrt(2)) * cote² 
 */
double COctogoneRegulier::surface() {
    return 2.0 * (1.0 + sqrt(2.0)) * m_cote * m_cote;
}