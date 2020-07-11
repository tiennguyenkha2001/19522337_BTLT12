#include "KhachHang.h"
KhachHang::KhachHang()
{
	a[0] = new TayTrang;
	a[1] = new RuaMat;
	a[2] = new MatNa;
	a[3] = new Toner;
	a[4] = new Serum;
	a[5] = new KemDuong;
	a[6] = new ChongNang;
}
void KhachHang::Nhap()
{
	cin.ignore();
	cout << "\nNhap ho ten: ";
	getline(cin, name);
	cout << "\nChon dich vu tuy chon 1.Co 2.Khong ";
	int index;
	cout << "\nToner: ";
	cin >> index;
	a[3]->CheckSuDung(index);
	cout << "\nSerum: ";
	cin >> index;
	a[4]->CheckSuDung(index);
	cout << "\nKem Duong: ";
	cin >> index;
	a[5]->CheckSuDung(index);
	cout << "\nChong Nang: ";
	cin >> index;
	a[6]->CheckSuDung(index);
}
void KhachHang::Xuat()
{
	float s = 0;
	float t = 0;
	cout << "\nCac dich vu da su dung: ";
	for (int i = 0; i < 7; i++)
	{
		if (a[i]->GetSuDung() == true)
		{
			a[i]->Xuat();
			s = s + a[i]->TinhTien();
			t = t + a[i]->ThoiGian();
		}
	}
	cout << "\nTong thoi gian: " << t;
	cout << "\nTong Tien: "<<s;
}
float KhachHang::TinhTongTien()
{
	float s = 0;
	for (int i = 0; i < 7; i++)
	{
		if (a[i]->GetSuDung() == true)
			s = s + a[i]->TinhTien();
	}
	return s;
}

