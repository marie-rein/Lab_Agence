#pragma once
#include "Vaisseau.h"
#include <vector>
using std::vector;

class Station
{

private:
	
	int platnumDisponible;
	int vieStation;
	  vector<Vaisseau*> vecVaisseau;

public :

	Station();
	~Station();

	 vector<Vaisseau*> getVaisseauDispo();

	  void init();

	 void ajouterVaisseau(Vaisseau* vaisseau);

	 virtual std::string to_string();

	 void AfficherVaisseau();
};

