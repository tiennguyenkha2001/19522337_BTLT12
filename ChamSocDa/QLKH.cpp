#include "QLKH.h"
void QLKH::Nhap()
{
	cout << "\nNhap luong khach hang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		KhachHang temp;
		temp.Nhap();
		dskh.push_back(temp);
	}
}
void QLKH::FinhMAX()
{
	float max = dskh[0].TinhTongTien();
	int k = 0;
	for (int i = 1; i < n; i++)
	{
		if (max < dskh[i].TinhTongTien())
		{
			max = dskh[i].TinhTongTien();
			k = i;
		}
	}
	cout << "\nKhach hang chi tieu nhieu nhat la: ";
	dskh[k].Xuat();
}
