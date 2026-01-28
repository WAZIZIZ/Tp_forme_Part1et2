///////////////////////////////////////////////////////////
//  rectangle.h
//  Implementation of the Class CRetangle
//  Created on:      20-janv.-2026 10:20:43
//  Original author: Utilisateur
///////////////////////////////////////////////////////////

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "forme.h"

class CCRectangle : public CForme {
private:
    int m_largeur;
    int m_longueur;

public:
    
    CCRectangle(string nom, int largeur, int longueur);

   
    void afficher();
    double surface();
};

#endif
