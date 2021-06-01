#pragma once

#include "PhysicalPlayer.h"


class Roulette
{

	PhysicalPlayer* _PhysPlayer = nullptr;


	void ShowMenu();

public:
	Roulette() {};
	~Roulette() {};

	void Join(PhysicalPlayer&);




protected:


};

