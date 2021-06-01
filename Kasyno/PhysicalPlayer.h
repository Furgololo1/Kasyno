#pragma once
#include "Player.h"


class PhysicalPlayer : public Player
{


protected:
    std::string _Name = "Bot Player";
	float _Money = 0.f;
	int _BlackJackSum = 0;


public:
 
	std::string GetName() override;
	void SetName(std::string name) override;
	float GetMoney() override;
	void SetMoney(float) override;
	int GetBlackJackSum() override;
	void SetBlackJackSum(int) override;


};

