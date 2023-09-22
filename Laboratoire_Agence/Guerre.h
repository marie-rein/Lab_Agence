#pragma once
#include "Vaisseau.h"

class Guerre : public Vaisseau
{
public:
	//Guerre();
	Guerre(Faction* _faction);
	~Guerre();

	virtual std::string to_string();
};

