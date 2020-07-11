#pragma once
#include"Step.h"
class TayTrang:public Step
{
public:
	TayTrang()
	{
		ChiPhi = 30;
		time = 5;
		SuDung = true;
	}
	void Xuat();
	void CheckSuDung(bool a)
	{
		SuDung = true;
	}
};

