// Heritage_formes.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "forme.h"
#include "rectangle.h"

using namespace std;

int main() {
    // 1. Créer une variable de type pointeur sur CForme 
    CForme* maForme;

    // 2. Allocation dynamique d'une instance de CCRectangle 
    // On crée un rectangle de 10x5 nommé "MonRectangle"
    maForme = new CCRectangle("MonRectangle", 10, 5);

    // 3. Appeler afficher() et surface() 
    cout << "--- TEST CRITIQUE (PARTIE 2) ---" << endl;
    maForme->afficher();

    cout << "Surface calculee : " << maForme->surface() << endl;
    cout << "--------------------------------" << endl;

    // Nettoyage de la mémoire
    delete maForme;

    return 0;
}
