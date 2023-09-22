#pragma once
#include <string>
using std::string;




class Faction
{
public:
	int attaque;
	int defense;
	int vie;
	int capacite;
	std::string nomFaction;

public:
	Faction();

	Faction(int attaque, int defense, int vie, int capacite,string nom);

	virtual std::string to_string();
	~Faction();
};

