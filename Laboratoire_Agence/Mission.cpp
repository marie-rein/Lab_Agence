#include "Mission.h"
#include <type_traits>
#include <iostream>

Mission::Mission():attaqueMission(0),defenseMission(0),vieMission(0),etatMission(false){}

Mission::Mission(int attaque, int defense, int vie, bool etat)
{
	attaqueMission = attaque;
	defenseMission = defense;
	vieMission = vie;
	etatMission = etat;
}

void Mission::SetRequirent(vector<Vaisseau*> vaisseau)
{
	attaqueMission = genererNombre(30, 100);
	defenseMission = genererNombre(20, 80);
	vieMission = genererNombre(1, 5);

	//vaisseau = station.getVaisseauDispo();

	for (int i = 0; i < vaisseau.size(); i++)
	{
		if (((vaisseau[i]->getAtt() >= attaqueMission) && (vaisseau[i]->getDef()) >= defenseMission) && (vaisseau[i]->getVie() >= vieMission))
		{
			etatMission = true;
			//std::cout << "Vaisseau Choisi est : " + vaisseau[i]->to_string();
			
		}
		else
		{
			std::cout << "Vaisseau non compatible : "  "\n";
		}
	}
	
	//return vaisseau;
}

inline int Mission::genererNombre(int min, int max)
{
	return (rand() % (max - min + 1)) + min;
	
}

bool Mission::getEtat()
{
	return etatMission;
}

//void Mission::AfficherVaisseauChoisi()
//{	
//	
//	for (int i = 0; i < vaisseau.size(); i++)
//	{
//		std::cout << vaisseau[i]->to_string();
//	}
//}

string Mission::to_string()
{
	string info;
	
	info = info.append("La mission est en cours");

	
	return info;
}

Mission::~Mission()
{
	std::cout << "Mission terminée";
}
