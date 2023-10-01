#pragma once
#include <string>
using std::string;
#include "Faction.h"

class Vaisseau
{
	const int points_Bonus = 100;
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
	int bonus;
	

public:

	Vaisseau(std::string nom, int attaque, int defense, int vie, int capacite, int niveau, int exp);
	Vaisseau(Faction* _faction);
	Vaisseau();
	~Vaisseau();

	int getAtt() 
	{
		return attaque + maFaction->attaque;
	}
	int getBonus()
	{
		return bonus + 100;
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

