#pragma once
#include"Step.h"
class MatNa:public Step
{
public:
	MatNa()
	{
		ChiPhi = 100;
		time = 30;
		SuDung = true;
	}
	void Xuat();
	void CheckSuDung(bool a)
	{
		SuDung = true;
	}
};

