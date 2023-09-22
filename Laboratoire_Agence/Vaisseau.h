#pragma once
#include <string>
using std::string;
#include "Faction.h"

class Vaisseau
{

protected:
	Faction* maFaction;

protected:
	int attaque;
	int defense;
	int vie;
	int capacite;
	std::string nom;
	int niveau;
	int exp;
	

public:

	Vaisseau(std::string nom, int attaque, int defense, int vie, int capacite, int niveau, int exp);
	Vaisseau(Faction* _faction);
	Vaisseau();
	~Vaisseau();

	int getAtt() 
	{
		return attaque + maFaction->attaque;
	}

	int getDef() 
	{
		return defense + maFaction->defense;
	}
	int getVie() 
	{
		return vie + maFaction->vie;
	}


	virtual std::string to_string();
	
};

