#pragma once
#include<iostream>
using namespace std;
class Point
{
private:
	int x, y;
public:
	Point(int a = 1, int b = 1);
	friend istream& operator>>(istream&, Point&);
	friend ostream& operator<<(ostream&, Point);
	Point(const Point& a)
	{
		x = a.x;
		y = a.y;
	}

};

