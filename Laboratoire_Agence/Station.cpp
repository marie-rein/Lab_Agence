#include "Station.h"
#include "FactoryVaisseau.h"
#include <iostream>

Station::Station() 
{
	platnumDisponible = 0;
	vieStation = 0;
	
};

Station::~Station() {}; 

 void Station::init()
{
	for (int i = 0; i < 3; i++)
	{
		vecVaisseau.push_back(FactoryVaisseau::getRandomVaisseau());
		
	}
}

 void Station::AjouterMission()
 {
	 mission.SetRequirent(vecVaisseau);
 }

 /*void Station::AfficherMissionVaisseau()
 {
	 if (mission.getEtat())
	 {
		 std::cout << "Vaisseau Choisi est : " + vecVaisseau->to_string();
	 }
 }*/

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
	infoStation.append("Vie de la station  : " + std::to_string(this->vieStation) + "\n");

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