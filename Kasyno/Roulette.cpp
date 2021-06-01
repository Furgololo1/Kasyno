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
	setCursor(2, 3);
	std::cout <<"Gracz "<<_PhysPlayer->GetName()<<", Saldo konta: "<< _PhysPlayer->GetMoney()<<"$";

	setCursor(18, 6); std::cout << "===========|			|===========|";
	setCursor(18, 7); std::cout << "           |			|           |";
	setCursor(18, 8); std::cout << "           |			|  1 do 18  |";
	setCursor(18, 9); std::cout << "           |			|           |";
	setCursor(18, 10); std::cout << "Pierwsze 12|			|===========|";
	setCursor(18, 11); std::cout << "           |			|           |";
	setCursor(18, 12); std::cout << "           |			|Nieparzyste|";
	setCursor(18, 13); std::cout << "           |			|           |";
	setCursor(18, 14); std::cout << "===========|			|===========|";
	setCursor(18, 15); std::cout << "           |			|           |";
	setCursor(18, 16); std::cout << "           |			|  Czerwony |";
	setCursor(18, 17); std::cout << "           |			|  kolor    |";
	setCursor(18, 18); std::cout << " Drugie 12 |			|===========|";
	setCursor(18, 19); std::cout << "           |			|           |";
	setCursor(18, 20); std::cout << "           |			|  Czarny   |";
	setCursor(18, 21); std::cout << "           |			|  kolor    |";
	setCursor(18, 22); std::cout << "===========|			|===========|";
	setCursor(18, 23); std::cout << "           |			|           |";
	setCursor(18, 24); std::cout << "           |			| Parzyste  |";
	setCursor(18, 25); std::cout << "           |			|           |";
	setCursor(18, 26); std::cout << "Trzecie 12 |			|===========|";
	setCursor(18, 27); std::cout << "           |			|           |";
	setCursor(18, 28); std::cout << "           |			| 19 do 36  |";
	setCursor(18, 29); std::cout << "           |			|           |";
	setCursor(18, 30); std::cout << "===========|			|===========|";
	setCursor(2, 31);  std::cout << "|2do1|2do1|2do1|";

	_getch();
}

void Roulette::Join(PhysicalPlayer& physplayer)
{
	_PhysPlayer = &physplayer;

	system("cls");
	ShowMenu();
}
