#include "Aventurier.h"


Aventurier::Aventurier()
{
	niveau = 45;
}
Aventurier::~Aventurier()
{
	tabQuete.clear();
}

int Aventurier::getNiveau()
{
	return niveau;
}

void Aventurier::AfficherQuete()
{
	for (int i = 0; i < tabQuete.size(); i++)
	{
		std::cout << tabQuete[i]->to_string();
		std::cout << "\n";
	}
}

void Aventurier::AjouterQuete(Quete* quete)
{
	tabQuete.push_back(quete);
}
string Aventurier::to_string()
{
	string info;
	info.append("Niveau : " + std::to_string(this->getNiveau()));
	return info;
}