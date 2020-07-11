#pragma once
#include"QuanCo.h"
class Si:public QuanCo
{
public:
	void Xuat();
	Si(){}
	Si(bool newa, int b, int c) :QuanCo(newa, b, c)
	{
	}
};

