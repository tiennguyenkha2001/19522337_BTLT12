#pragma once
#include"Step.h"
class KemDuong:public Step
{
public:
	KemDuong()
	{
		ChiPhi = 50;
		time = 10;
		SuDung = true;
	}
	void Xuat();
    void CheckSuDung(bool a)
	{
		SuDung = a;
	}
};

