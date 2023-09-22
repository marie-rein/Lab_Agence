#include "Livraison.h"


//Livraison::Livraison() :Vaisseau("Vaisseau Livraison 1", 40, 50, 15, 19, 2, 3) {}
Livraison::Livraison(Faction* _faction) :Vaisseau()
{
	maFaction = _faction;
	nom = "Vaisseau Livraison 1";
	attaque = 40;
	defense = 50;
	vie = 15;
	capacite = 19;
	niveau = 2;
	exp = 3;

}

Livraison::~Livraison() {}

string Livraison::to_string()
{
	string info = Vaisseau::to_string();
	info.append("Je suis un vaisseau de livraison \n");

	return info;
}
