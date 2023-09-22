#include "Transport.h"


//Transport::Transport() :Vaisseau("Vaisseau transport 1", 50, 10, 15, 71, 3, 2){}

Transport::Transport(Faction* _faction) :Vaisseau()
{
	maFaction = _faction;
	nom = "Vaisseau Transport 1";
	attaque = 50;
	defense = 10;
	vie = 15;
	capacite = 71;
	niveau = 3;
	exp = 1;
}

Transport::~Transport(){}

string Transport::to_string()
{
	string info = Vaisseau::to_string();

	info.append("Je suis un vaisseau de transport \n");
	return info;
}