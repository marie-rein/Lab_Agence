#include "Faction.h"


Faction::Faction(): attaque(0),defense(0),vie(0), capacite(0){}

Faction::Faction(int attaque, int defense, int vie, int capacite,string nom)
{
	this->attaque = attaque;
	this->defense = defense;
	this->vie = vie;
	this->capacite = capacite;
	nomFaction = nom;

}

string Faction::to_string()
{
	string info = info.append("Je suis une Faction : " + nomFaction + "\n");
	return info;
}

Faction::~Faction(){}