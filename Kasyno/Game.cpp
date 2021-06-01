#include "Game.h"

Game::Game()
{
	PhysPlayer = new PhysicalPlayer;
}

Game::~Game()
{
	delete PhysPlayer;
}

void Game::SetupPhysicalPlayer()
{
	std::string name = "Player 1";
	std::cout << "Witaj w kasynie!!! \n";
	std::cout << "Podaj swoja nazwe: "; std::getline(std::cin, name);
	PhysPlayer->SetName(name);

	srand(time(NULL));

	int money = rand() % 251 + 250;
	PhysPlayer->SetMoney((float)money);
	//std::this_thread::sleep_for(std::chrono::milliseconds(1500));
	system("cls");
	ShowMenu();
}

void Game::ShowMenu()
{

	std::cout << "Wybierz w jaka gre chcesz zagrac klikajac w odpowiadajacy jej numer na klawiaturze\n\n";
	std::cout << "Nazwa konta: " << PhysPlayer->GetName() << "\nSaldo konta: " << PhysPlayer->GetMoney() << "$\n\n";
	std::cout << "---------------------------------\n\n";
	std::cout << "1. Ruletka\n";
	std::cout << "2. BlackJack\n";
	std::cout << "3. Jednoreki bandyta\n";
	std::cout << "\n---------------------------------\n\n";

	StartGame(_getch());
}

void Game::StartGame(char game_nr)
{
	if (PhysPlayer->GetMoney() <= 0) {
		std::cout << "Nie masz juz pieniedzy";
		std::this_thread::sleep_for(std::chrono::milliseconds(1500));
		//koniec gry
		return;
	}

	else {
		if (game_nr == '1') { 
			roulette = new Roulette();
			roulette->Join(*PhysPlayer);
		}

		else if (game_nr == '2') std::cout << "BlackJack"; //BlackJack

		else if (game_nr == '3')  std::cout << "Jednoreki bandyta";//Jednoreki bandyta

		else {
			std::cout << "Podaj numer jeszcze raz";
			std::this_thread::sleep_for(std::chrono::milliseconds(1500));
			system("cls");
			ShowMenu();
		}
	}
}
