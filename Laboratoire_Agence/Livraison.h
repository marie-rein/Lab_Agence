#pragma once
#include "Vaisseau.h"

class Livraison : public Vaisseau
{
public:
	//Livraison();
	Livraison(Faction* _faction);
	~Livraison();
	virtual string to_string();
};

