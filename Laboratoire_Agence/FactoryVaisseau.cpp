#include "FactoryVaisseau.h"
#include <ctime>
#include "Transport.h"
#include "Guerre.h"
#include "Livraison.h"
#include <iostream>
using std::endl;
using std::string;
#include <type_traits>



static inline int genererNombre(int min, int max)
{
	return (rand() % (max - min + 1)) + min;
}

Vaisseau* FactoryVaisseau::getRandomVaisseau()
{

	Vaisseau* vaisseau(0);

	Faction* maFaction = getRandomFaction();

	Mesvaisseaux lesvaisseaux = (Mesvaisseaux)genererNombre(0, 2);


	if (lesvaisseaux == Mesvaisseaux::Geurre)
	{
		vaisseau = new Guerre(maFaction);
	}
	else if (lesvaisseaux == Mesvaisseaux::Transport)
	{
		vaisseau = new Transport(maFaction);
	}
	else
	{
		vaisseau = new Livraison(maFaction);
	}
	return vaisseau;

}



Faction* FactoryVaisseau::getRandomFaction()
{


	Vaisseau* vaisseau(0);
	Faction* fac(0);

	Mesfaction faction = (Mesfaction)genererNombre(0, 1);

	if (faction == Mesfaction::Rouge)
	{
		fac = new Faction(20, 30, 1,4,"Rouge");
	}
	else if (faction == Mesfaction::Bleu)
	{
		fac = new Faction(10, 10, 4, 3,"Bleue");
	}

	
	return fac;

}
