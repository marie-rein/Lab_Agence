// Laboratoire_Agence.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Vaisseau.h"
//#include "Guerre.h"
//#include "Livraison.h"
//#include "Transport.h"
#include "FactoryVaisseau.h"
#include "Station.h"
#include "Mission.h"

using std::endl;

int main()
{
    
    srand(time(NULL));
    //Partie 1
    // Creation vaisseau transport

    //Transport* monTransport = new Transport();
    //std::cout << monTransport->to_string();
    //delete monTransport;

    //std::cout << "\n";

    //// Creation vaisseau de livraison

    //Livraison* maLivraison = new Livraison();
    //std::cout << maLivraison->to_string();
    //delete maLivraison;

    //std::cout << "\n";

    ////Creation vaisseau de guerre

    //Guerre* laGuerre = new Guerre();
    //std::cout << laGuerre->to_string();
    //delete laGuerre;

    //Partie 2
    
   /* 
    std::cout << "------------------ PRODUCTION D'UN VAISSEAU --------------" << endl;
    Vaisseau* monVaisseau = FactoryVaisseau::getRandomVaisseau();
    std::cout << monVaisseau->to_string();
    delete monVaisseau;*/

    //Partie 3

    Station* station = new Station();
   
     station->init();
     //station->AfficherVaisseau();

    // Mission* mission = new Mission();

     //station->AjouterMission(); 
     
     station->EnvoieEnMission();
     
     std::cout << "La vie de la station est :" + std::to_string(station->getVieStation());
     std::cout << "\n";
     //mission->AfficherVaisseauChoisi();
     

     delete station;
     //delete mission;



    
   
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
