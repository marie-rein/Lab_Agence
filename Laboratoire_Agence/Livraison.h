#pragma once
#include "Vaisseau.h"

class Livraison : public Vaisseau
{
public:
	Livraison();
	~Livraison();
	virtual string to_string();
};

