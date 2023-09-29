#include "Factory.h"
#include <ctime>


static inline int genererNombre(int min, int max)
{
	return (rand() % (max - min + 1)) + min;
}

Quete* Factory::getRandomQuete()
{

	Quete* quete(0);

	int probabilite(0);
	probabilite = genererNombre(1,100);
	int niveauMin(0);
	int recompense(0);
	int exp(0);

	//Niveau lesNiveaux = (Niveau)genererNombre(0, 2);


	if (probabilite <= 75)
	{
		niveauMin = genererNombre(1, 10);
		recompense = genererNombre(100, 1000);
		exp = genererNombre(101, 2000);
		quete = new Quete(1,niveauMin,recompense,exp,"Quete Facile");
	}
	else if (probabilite > 70 && probabilite <= 90)
	{
		niveauMin = genererNombre(11, 25);
		recompense = genererNombre(1001, 5000);
		exp = genererNombre(2000, 4000);
		quete = new Quete(2, niveauMin, recompense, exp, "Quete Moyenne");
	}
	else if (probabilite > 90 && probabilite <= 100)
	{
		niveauMin = genererNombre(26, 99);
		recompense = genererNombre(5001, 35000);
		exp = genererNombre(4001, 14000);
		quete = new Quete(3, niveauMin, recompense, exp, "Quete Difficile");
	}
	
	return quete;

}
