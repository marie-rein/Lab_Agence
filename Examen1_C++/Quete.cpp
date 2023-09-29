#include "Quete.h"


Quete::Quete() 
{
	nom = nom;
	nivMin = 0;
	recompenseOr = 0;
	expRecu = 0;

}
Quete::Quete(int niveau, int nivMin, int recompsense, int exp, string nom)
{
	niveauDifficulte = niveau;
	this->nivMin = nivMin;
	recompenseOr = recompsense;
	expRecu = exp;
	this->nom = nom;
}

int Quete::getDifficulte()
{
	return niveauDifficulte;
}

int Quete::getExp()
{
	return expRecu;
}
int Quete::getNivMin()
{
	return nivMin;
}

int Quete::getRecompense()
{
	return recompenseOr;
}

string Quete::to_string()
{
	string info;
	info.append("Nom de la quete : " + nom + "\n");
	info.append("Niveau Difficulte : " + std::to_string(this->getDifficulte()) + "\n");
	info.append("Niveau Minimum : " + std::to_string(this->getNivMin()) + "\n");
	info.append("Recompense : " + std::to_string(this->getRecompense()) + "\n");
	info.append("Experience recue  : " + std::to_string(this->getExp()) + "\n");

	return info;
}

Quete::~Quete() 
{
	
};
