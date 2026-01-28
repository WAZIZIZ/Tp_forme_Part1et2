///////////////////////////////////////////////////////////
//  triangle.h
//  Implementation of the Class CTriangle
//  Created on:      20-janv.-2026 10:08:10
//  Original author: Utilisateur
///////////////////////////////////////////////////////////

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "forme.h"

class CTriangle : public CForme {
private:
    int m_hauteur;
    int m_base;

public:
    // Constructeur : nom, hauteur, base 
    CTriangle(string nom, int hauteur, int base);

    void afficher();  
    double surface(); 
};

#endif