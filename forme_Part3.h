///////////////////////////////////////////////////////////
//  forme.h
//  Implementation of the Class CForme
//  Created on:      20-janv.-2026 10:20:36
//  Original author: Utilisateur
///////////////////////////////////////////////////////////

#ifndef FORME_H
#define FORME_H

#include <string>
#include <iostream>
using namespace std;

class CForme {
public:
    CForme();
    CForme(string _nom);
    virtual ~CForme(); // Il est conseillé de mettre le destructeur en virtual aussi

    // AJOUT DU MOT-CLÉ VIRTUAL ICI :
    virtual void afficher();
    virtual double surface();

private:
    string nom;
};

#endif
