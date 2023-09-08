#pragma once
#include <string>
using std::string;
#include "Faction.h"

class Vaisseau
{

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
	~Vaisseau();

	int getAtt() 
	{
		return attaque;
	}

	int getDef() 
	{
		return defense;
	}
	int getVie() 
	{
		return vie;
	}


	virtual std::string to_string();
	
};

