#pragma once
#include "Vaisseau.h"

class Transport : public Vaisseau
{
public:
	//Transport();
	Transport(Faction* _faction);
	~Transport();
	virtual string to_string();
	
};

