#include "Vaisseau.h"
#include "Faction.h"

Vaisseau::Vaisseau(string nom, int attaque, int defense, int vie, int capacite, int niveau, int exp) 
{
	this->nom = nom;
	this->attaque = attaque;
	this->defense = defense;
	this->vie = vie;
	this->capacite = capacite + maFaction->attaque;
	this->niveau = niveau;
	this->exp = exp;
}


Vaisseau::Vaisseau()
{
	attaque = 0;
	defense = 0;
	vie = 0;
	capacite = 0;
	niveau = 0;
	exp = 0;
	this->maFaction =maFaction;
}

Vaisseau::Vaisseau(Faction* _faction)
{
	maFaction = _faction;
	this->nom = nom;
}

Vaisseau::~Vaisseau() {}

string Vaisseau::to_string() 
{
	string infoVaisseau;
	infoVaisseau.append("Nom du vaisseau : " + nom + "\n");
	infoVaisseau.append("Niveau attaque  : " + std::to_string(this->getAtt()) + "\n");
	infoVaisseau.append("Niveau defense  : " + std::to_string(this->getDef()) + "\n");
	infoVaisseau.append("Niveau vie      : " + std::to_string(this->getVie()) + "\n");
	infoVaisseau.append("capacite du vaisseau : " + std::to_string(capacite) + "\n");
	infoVaisseau.append("niveau du vaisseau : " + std::to_string(niveau) + "\n");
	infoVaisseau.append("exp du vaisseau : " + std::to_string(exp) + "\n");
	infoVaisseau.append("Type Faction : " + maFaction->nomFaction + +"\n");

	return infoVaisseau;
}
