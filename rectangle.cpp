///////////////////////////////////////////////////////////
//  rectangle.cpp
//  Implementation of the Class CRetangle
//  Created on:      20-janv.-2026 10:20:43
//  Original author: Utilisateur
///////////////////////////////////////////////////////////
#include "rectangle.h"
#include <iostream>


CCRectangle::CCRectangle(string nom, int largeur, int longueur)
    : CForme(nom) { // Appel du constructeur de la classe mère
    this->m_largeur = largeur;
    this->m_longueur = longueur;
}

/** * Affiche les informations spécifiques au rectangle.
 */
void CCRectangle::afficher() {
    CForme::afficher(); // Appelle l'affichage du nom défini dans CForme 
    cout << "Type : Rectangle" << endl;
    cout << "Dimensions : " << m_largeur << " x " << m_longueur << endl;
}

/** * Calcule la surface du rectangle : Largeur * Longueur.
 */
double CCRectangle::surface() {
    return (double)m_largeur * m_longueur;
}