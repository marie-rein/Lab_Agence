#pragma once
#include "Vaisseau.h"

class Transport : public Vaisseau
{
public:
	Transport();
	~Transport();
	virtual string to_string();
	
};

