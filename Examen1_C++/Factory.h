#pragma once
#include "Quete.h"

enum class Niveau {facile,Moyen,Difficile};
static inline int genererNombre(int min, int max);
class Factory
{
public:
	static Quete* getRandomQuete();

};

