#include "FMahine.h"
#include <cstdlib>
#include <time.h>
#include <chrono>
#include <thread>
#include <conio.h>
#include <windows.h>


void setCursor2(int x, int y)
{
	COORD c;
	c.X = x - 1;
	c.Y = y - 1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void FMachine::ShowGame()
{
	system("cls");
	setCursor2(1, 1);
	std::cout << "Gracz " << _PhysPlayer->GetName() << ", Saldo konta: " << _PhysPlayer->GetMoney() << "$";

	setCursor2(10, 5); std::cout << "||=======||=======||=======||";
	for (int i = 6; i <= 10; i++) {
		setCursor2(10, i); std::cout << "||       ||       ||       ||";
	}
	setCursor2(10, 11); std::cout << "||=======||=======||=======||";

	Draw();

	_getch();
}

void FMachine::Draw()
{
	srand(time(NULL));
	int a, b, c;

	a = rand() % 6 + 1;
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	setCursor2(15, 8); std::cout << a;

	b = rand() % 6 + 1;
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	setCursor2(24, 8); std::cout << b;

	c = rand() % 6 + 1;
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	setCursor2(33, 8); std::cout << c;

}

void FMachine::Join(PhysicalPlayer& physplayer)
{
	_PhysPlayer = &physplayer;
	ShowGame();
	
}
