#include "Guerre.h"



Guerre::Guerre():Vaisseau("Vaisseau guerre 1",40, 20, 50, 30, 1, 0){}

Guerre::~Guerre() {}

string Guerre::to_string()
{
	string info = Vaisseau::to_string();
	info.append("Je suis un vaisseau de la guerre \n" );

	return info;
}