#pragma once
#include <string>
using std::string;


class Faction
{
protected:
	int attaque;
	int defense;
	int vie;
	int capacite;
	std::string nom;

public:
	Faction();

	Faction(int attaque, int defense, int vie, int capacite);

	~Faction();

	string getNom();
};

