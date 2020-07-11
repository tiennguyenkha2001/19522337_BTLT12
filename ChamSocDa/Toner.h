#pragma once
#include"Step.h"
class Toner:public Step
{
public:
	Toner()
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

