#include "DaGiac.h"
istream& operator>>(istream& in, DaGiac& a)
{
	cout << "\nNhap so dinh: ";
	in >> a.n;
	a.arr = new Point[a.n];
	for (int i = 0; i < a.n; i++)
	{
		cout << "\nNhap dinh thu " << i + 1 << ":";
		in >> a.arr[i];
	}
	return in;
}
ostream& operator<<(ostream& out, DaGiac a)
{
	for (int i = 0; i < a.n; i++)
	{
		out << "\nDinh " << i + 1 << ":";
		out << a.arr[i];
   }
	return out;
}
DaGiac::DaGiac(const DaGiac& a)
{
	this->n = a.n;
	arr = new Point(a.n);
	for (int i = 0; i < n; i++)
	{
		arr[i] = Point(a.arr[i]);
	}
}