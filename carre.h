///////////////////////////////////////////////////////////
//  carre.h
//  Implementation of the Class CCarre
//  Created on:      20-janv.-2026 10:11:05
//  Original author: Utilisateur
///////////////////////////////////////////////////////////

#ifndef CARRE_H
#define CARRE_H

#include "rectangle.h" // On hérite de Rectangle

class CCarre : public CCRectangle {
public:
    // Le constructeur ne prend que le côté 
    CCarre(int cote);

    // On redéfinit afficher pour l'esthétique
    void afficher();

    
};

#endif
