#pragma once
#include <string>
using std::string;
#include <vector>
#include "Vaisseau.h"
using std::vector;

class Mission
{
private:
	int attaqueMission;
	int defenseMission;
	int vieMission;
	bool etatMission;
	//Station station;


public:

	Mission();

	Mission(int attaque, int defense, int vie, bool etat);

	 void SetRequirent(vector<Vaisseau*> vaisseau);

	inline int genererNombre(int min, int max);

	bool getEtat();

	
	virtual std::string to_string();

	~Mission();
};

