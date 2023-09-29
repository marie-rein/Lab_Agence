#pragma once
#include <vector>
using std::vector;
#include "Quete.h"
#include <iostream>

class Aventurier
{
private:
	int niveau;
	vector<Quete*> tabQuete;

public :
	Aventurier();
	~Aventurier();

	void AfficherQuete();
	void AjouterQuete(Quete* quete);
	int getNiveau();

	string to_string();
};

