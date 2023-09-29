// Examen1_C++.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Factory.h"
#include "Quete.h"
#include "Aventurier.h"

int main()
{
    srand(time(NULL));
    //Quete* maQuete = Factory::getRandomQuete();   // revoir l'erreur du null
    //std::cout << maQuete->to_string();
    
    Aventurier aventurier;

    for (int i = 0; i < 12; i++)
    {
        Quete* maQuete = Factory::getRandomQuete();

        if (aventurier.getNiveau() > maQuete->getNivMin())
        {
            aventurier.AjouterQuete(maQuete);
        }
        else
        {
            delete maQuete;
        }
    }
    aventurier.AfficherQuete();
 
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
