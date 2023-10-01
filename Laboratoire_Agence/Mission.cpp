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

/// <summary>
/// Definie les criteres des vaisseaux recherchés
/// </summary>
/// <param name="vaisseau"></param>
void Mission::SetRequirent(vector<Vaisseau*> vaisseau)
{
	attaqueMission = genererNombre(30, 100);
	defenseMission = genererNombre(20, 80);
	vieMission = genererNombre(1, 5);


	for (int i = 0; i < vaisseau.size(); i++)
	{
		if (((vaisseau[i]->getAtt() >= attaqueMission) && (vaisseau[i]->getDef()) >= defenseMission) && (vaisseau[i]->getVie() >= vieMission))
		{
			etatMission = true;
			
		}
		else
		{
			etatMission = false;
		}
	}
}

inline int Mission::genererNombre(int min, int max)
{
	return (rand() % (max - min + 1)) + min;
	
}

bool Mission::getEtat()
{
	return etatMission;
}


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
