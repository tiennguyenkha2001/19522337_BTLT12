#pragma once
#include"Step.h"
class ChongNang:public Step
{
public:
	ChongNang()
	{
		ChiPhi = 50;
		time = 30;
		SuDung = false;
	}
	void Xuat();
	void CheckSuDung(bool a)
	{
		SuDung = a;
	}
};

