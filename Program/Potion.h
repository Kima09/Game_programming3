#pragma once
#include "Consumable.h"

class Potion: public Consumable
{
protected:
	int stamina;

public:
	Potion();
	~Potion();
};

