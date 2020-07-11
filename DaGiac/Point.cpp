#include "Point.h"
Point::Point(int a, int b)
{
	x = a;
	y = b;
}
istream& operator>>(istream& in, Point& a)
{
	cout << "\nNhap hoanh do: ";
	in >> a.x;
	cout << "\nNhap tung do: ";
	in >> a.y;
	return in;

 }
ostream& operator<<(ostream& out, Point a)
{
	return out << a.x << ";" << a.y;
}
 