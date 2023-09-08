#include "Faction.h"


Faction::Faction(): attaque(0),defense(0),vie(0), capacite(0){}

Faction::Faction(int attaque, int defense, int vie, int capacite)
{
	this->attaque = attaque;
	this->defense = defense;
	this->vie = vie;
	this->capacite = capacite;
	this->nom = nom;
}

Faction::~Faction(){}