#pragma once
#include <iostream>

class Player
{

protected:
	std::string _Name = "Bot Player";
	float _Money = 0;
	int _BlackJackSum = 0;

public:

	Player() {};
	~Player() {};

	virtual std::string GetName() = 0;
	virtual void SetName(std::string name) = 0;
	virtual float GetMoney() = 0;
	virtual void SetMoney(float) = 0;
	virtual int GetBlackJackSum() = 0;
	virtual void SetBlackJackSum(int) = 0;

};

