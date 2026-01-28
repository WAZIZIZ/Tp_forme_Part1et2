///////////////////////////////////////////////////////////
//  OctogoneRegulier.h
//  Implementation of the Class OctogoneRegulier
//  Created on:      20-janv.-2026 10:20:48
//  Original author: Utilisateur
///////////////////////////////////////////////////////////

#ifndef OCTOGONE_H
#define OCTOGONE_H

#include "forme.h"

class COctogoneRegulier : public CForme {
private:
    int m_cote;

public:
    // Constructeur : nom et côté 
    COctogoneRegulier(string nom, int cote);

    void afficher(); 
    double surface(); 
};

#endif
