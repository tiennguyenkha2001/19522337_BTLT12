#pragma once
#include"QuanCo.h"
class Tuong:public QuanCo
{
public:
	void Xuat();
	Tuong(){}
	Tuong(bool newa, int b, int c) :QuanCo(newa, b, c)
	{

	}
};

