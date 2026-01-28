///////////////////////////////////////////////////////////
//  triangle.cpp
//  Implementation of the Class CTriangle
//  Created on:      20-janv.-2026 10:08:10
//  Original author: Utilisateur
///////////////////////////////////////////////////////////

#include "triangle.h"
#include <iostream>

/**
 * Constructeur : transmet le nom à CForme et initialise hauteur/base
 */
CTriangle::CTriangle(string nom, int hauteur, int base)
    : CForme(nom) {
    this->m_hauteur = hauteur;
    this->m_base = base;
}

/**
 * Affiche le nom (via CForme) et les détails du triangle 
 */
void CTriangle::afficher() {
    CForme::afficher();
    std::cout << "Type : Triangle" << std::endl;
    std::cout << "Dimensions : Base=" << m_base << ", Hauteur=" << m_hauteur << std::endl;
}

/**
 * Surface : (Base * Hauteur) / 2 
 */
double CTriangle::surface() {
    return (m_base * m_hauteur) / 2.0;
}