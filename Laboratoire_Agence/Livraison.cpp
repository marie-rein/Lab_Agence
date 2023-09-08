#include "Livraison.h"


Livraison::Livraison() :Vaisseau("Vaisseau Livraison 1", 40, 50, 15, 19, 2, 3) {}

Livraison::~Livraison() {}

string Livraison::to_string()
{
	string info = Vaisseau::to_string();
	info.append("Je suis un vaisseau de livraison \n");

	return info;
}
