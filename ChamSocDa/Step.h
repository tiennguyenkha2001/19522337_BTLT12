#pragma once
#include<iostream>
using namespace std;
class Step
{
protected:
	float time;
	float ChiPhi;
	bool SuDung;
public:
	virtual void Xuat() = 0;
	Step(){}
	 float TinhTien();
	 float ThoiGian();
	 virtual void CheckSuDung(bool)=0;
	 bool GetSuDung()
	 {
		 return SuDung;
	 }
};

