#pragma once
#include"Step.h"
class RuaMat:public Step
{
public:
	RuaMat()
	{
		ChiPhi = 50;
		time = 10;
		SuDung = true;
	}
	void Xuat();
	void CheckSuDung(bool a)
	{
		SuDung = true;
	}
};

