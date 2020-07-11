#pragma once
#include"Point.h"
class DaGiac
{
private:
	Point* arr;
	int n;
public:
	DaGiac(int newn = 0)
	{
		n = newn;
		arr = NULL;
	}
	friend istream& operator>>(istream&, DaGiac&);
	friend ostream& operator<<(ostream&, DaGiac);
	DaGiac(const DaGiac&);
	~DaGiac()
	{
		if (arr == NULL)
			return;
		else
		{
			delete[]arr;
		}
	}
};

