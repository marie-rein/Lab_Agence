#pragma once
#include <string>
using std::string;
class Quete
{
private:
	string nom;

	int niveauDifficulte;
	int nivMin;
	int recompenseOr;
	int expRecu;


public:

	Quete(int niveau, int nivMin, int recompense, int expRecu, string nom);
	Quete();
	~Quete();

	int getDifficulte();
	int getNivMin();
	int getRecompense();
	int getExp();

	 string to_string();
};

