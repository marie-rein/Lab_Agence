#pragma once
#include "Vaisseau.h"
#include <vector>
#include "Mission.h"
using std::vector;

class Station
{

private:
	
	int platnumDisponible;
	int vieStation;
	vector<Vaisseau*> vecVaisseau;
	Mission mission;

public :

	Station();
	~Station();

	 vector<Vaisseau*> getVaisseauDispo();

	  void init();
	  void AjouterMission();
	  int AfficherMissionVaisseau();
	  bool PreparerMission();
	  void EnvoieEnMission();

	  int getVieStation();
	 void ajouterVaisseau(Vaisseau* vaisseau);

	 virtual std::string to_string();

	 void AfficherVaisseau();
};

