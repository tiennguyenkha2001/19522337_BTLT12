#pragma once
#include<iostream>
using namespace std;
class QuanCo
{
protected:
	bool Loai;
	int x, y;
public:
	virtual void Xuat() = 0;
	QuanCo(){}
	QuanCo(bool newloai, int newx, int newy)
	{
		Loai = newloai;
		x = newx;
		y = newy;
	}
};

