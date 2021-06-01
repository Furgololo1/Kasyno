#pragma once
//#include <iostream>
#include <cstdlib>
#include <time.h>
#include <vector>
#include <string>
#include <thread>
#include <chrono>
#include <conio.h>
#include "Roulette.h"
#include "PhysicalPlayer.h"

class Game
{
private:

	PhysicalPlayer* PhysPlayer = nullptr;
	Roulette* roulette = nullptr;


	//std::vector<> bot player

	void ShowMenu();
	void StartGame(char);
	

public:
	Game();
	~Game();

	void SetupPhysicalPlayer();

	





};

