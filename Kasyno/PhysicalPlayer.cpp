#include "PhysicalPlayer.h"


std::string PhysicalPlayer::GetName()
{
	return _Name;
}

void PhysicalPlayer::SetName(std::string name)
{
	_Name = name;
}

float PhysicalPlayer::GetMoney()
{
	return _Money;
}

void PhysicalPlayer::SetMoney(float money)
{
	_Money = money;
}

int PhysicalPlayer::GetBlackJackSum()
{
	return _BlackJackSum;
}

void PhysicalPlayer::SetBlackJackSum(int blackJackSum)
{
	_BlackJackSum = blackJackSum;
}
