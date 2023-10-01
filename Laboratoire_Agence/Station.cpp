#include "Station.h"
#include "FactoryVaisseau.h"
#include <iostream>

Station::Station() 
{
	platnumDisponible = 0;

};

Station::~Station() {}; 

 void Station::init()
{
	for (int i = 0; i < 3; i++)
	{
		vecVaisseau.push_back(FactoryVaisseau::getRandomVaisseau());
		
	}
}

 int Station::getVieStation()
 {
	 return vieStation;
}

 void Station::AjouterMission()
 {
	 mission.SetRequirent(vecVaisseau);
 }

 /// <summary>
 /// Appele la fonction setRequirement de mission pour voir si le vaisseau reponds aux criteres puis retourne la vie station
 /// </summary>
 /// <returns>bool</returns>
 int Station::AfficherMissionVaisseau()
 {

	 for (int i = 0; i < vecVaisseau.size(); i++)
	 {
		 
		 mission.SetRequirent(vecVaisseau);
		 if (mission.getEtat())
		 {
			 std::cout << "\nVaisseau Choisi est : " + vecVaisseau[i]->to_string();

			 vieStation = vieStation + 1; 
			 int bonusVaisseau = vecVaisseau[i]->getBonus();
			 std::cout << "Les points bonus pour le Vaisseau est :" + std::to_string(bonusVaisseau);
			 std::cout << "\n";
		 }
		 else
		 {
			 std::cout << "\nVaisseau non compatible : \n";
		 }
		 
	 }
	 return vieStation;
 }

vector<Vaisseau*> Station::getVaisseauDispo() 
{
	return vecVaisseau;
}

void Station::ajouterVaisseau(Vaisseau* vaisseau) 
{
	vecVaisseau.push_back(vaisseau);
}
string Station::to_string()
{
	string infoStation;
	infoStation.append("Platnum disponible : " + std::to_string(this->platnumDisponible) + "\n");
	
	return infoStation;
}

void Station::AfficherVaisseau() 
{
	for (int i = 0; i < vecVaisseau.size(); i++)
	{
		std::cout << vecVaisseau[i]->to_string() << ' ';
		std::cout << "\n";
	}

}

/// <summary>
/// Verifie si la station a aumoins une vie ou 2 pour envoyer le vaisseau en mission
/// </summary>
/// <returns>bool</returns>
bool Station::PreparerMission()
{
	int vie = AfficherMissionVaisseau();
	bool valeur = false;

	if (vie >= 1)
	{	
		valeur = true;
	}
	return valeur;
}

/// <summary>
/// Verifie si il y a un vaisseau trouvé pour l'envoyer en mission 
/// </summary>
void Station::EnvoieEnMission()
{
	bool estVrai = PreparerMission();

	if (estVrai)
	{
		std::cout << "\nLe(s) vaisseau(x) selectionne(s) est/sont pret(ent) pour aller en mission  \n";
	}
}