#include "Roulette.h"
#include <windows.h>
#include <conio.h>


void setCursor(int x, int y)
{
	COORD c;
	c.X = x - 1;
	c.Y = y - 1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}


void Roulette::ShowMenu()
{
	std::cout << "Witaj w grze ruletka!!!\n\n\n";

	std::cout << " ________________\n";
	std::cout << " |       0      |\n";
	std::cout << " |--------------|\n";
	for (int i = 1; i <= 36; i++) {
		if(i<10)
			std::cout << " |  "<<i;
		else
			std::cout << " | " << i;

		if (i % 3 == 0) {
			std::cout << " |\n";
			std::cout << " |----|----|----|\n";
		}

	}
	setCursor(50, 5);
	std::cout <<"Gracz "<<_PhysPlayer->GetName()<<", Saldo konta: "<< _PhysPlayer->GetMoney()<<"$";
	_getch();
}

void Roulette::Join(PhysicalPlayer& physplayer)
{
	_PhysPlayer = &physplayer;

	system("cls");
	ShowMenu();
}
