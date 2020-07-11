#pragma once
#include"ChongNang.h"
#include"KemDuong.h"
#include"MatNa.h"
#include"RuaMat.h"
#include"Serum.h"
#include"TayTrang.h"
#include"Toner.h"
#include<string>
class KhachHang
{
private:
	Step* a[7];
	string name;
public:
	KhachHang();
	void Nhap();
	void Xuat();
	float TinhTongTien();
	//float TongThoiGian();

};

