#pragma once

#include "Vaisseau.h"
#include "Faction.h"


enum class Mesvaisseaux { Geurre, Transport, Livraison };

enum class Mesfaction { Rouge, Bleu };
static inline int genererNombre(int min, int max);

class FactoryVaisseau
{

public:

	static Vaisseau* getRandomVaisseau();

private:

	static Faction* getRandomFaction();
};

