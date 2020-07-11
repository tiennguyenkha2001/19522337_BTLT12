#pragma once
#include"Step.h"
class Serum:public Step
{
public:
	Serum()
	{
		ChiPhi = 50;
		time = 10;
		SuDung = false;
	}
	void Xuat();
	void CheckSuDung(bool a)
	{
		SuDung = a;
	}
};

