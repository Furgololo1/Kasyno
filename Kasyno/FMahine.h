#pragma once
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <chrono>
#include <thread>
#include <conio.h>
#include <windows.h>
#include <vector>
#include "PhysicalPlayer.h"


class FMachine
{

	PhysicalPlayer* _PhysPlayer = nullptr;

	void ShowGame();
	void Draw();
	void DrawAnim();

	std::thread animThread(FMachine::DrawAnim);

public:

	FMachine() {};
	~FMachine() {};

	void Join(PhysicalPlayer&);







};

