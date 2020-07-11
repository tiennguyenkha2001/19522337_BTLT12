#include "BanCo.h"
BanCo::BanCo()
{
	arr[0] = new Xe(true, 1, 1);
	arr[1] = new  Ma(true, 1, 2);
	arr[2] = new Tuongj(true, 1, 3);
	arr[3] = new Si (true, 1, 4);
	arr[4] = new  Tuong(true, 1, 5);
	arr[5] = new Si(true, 1, 6);
	arr[6] = new Tuongj(true, 1, 7);
	arr[7] = new  Ma(true, 1, 8);
	arr[8] = new Xe(true, 1, 9);
	arr[9] = new Phao(true, 3, 2);
	arr[10] = new  Phao(true, 3, 8);
	arr[11] = new Tot(true, 4, 1);
	arr[12] = new Tot(true, 4, 3);
	arr[13] = new Tot(true, 4, 5);
	arr[14] = new Tot(true, 4, 7);
	arr[15] = new Tot(true, 4, 9);
	arr[16] = new Xe(false, 10, 1);
	arr[17] = new  Ma(false, 10, 2);
	arr[18] = new Tuongj(false, 10, 3);
	arr[19] = new Si(false, 10, 4);
	arr[20] = new Tuong(false, 10, 5);
	arr[21] = new Si(false, 10, 6);
	arr[22] = new Tuongj(false, 10, 7);
	arr[23] = new  Ma(false, 10, 8);
	arr[24] = new Xe(false, 10, 9);
	arr[25] = new Phao(false, 8, 2);
	arr[26] = new  Phao(false, 8, 8);
	arr[27] = new Tot(false, 7, 1);
	arr[28] = new Tot(false, 7, 3);
	arr[29] = new Tot(false, 7, 5);
	arr[30] = new Tot(false, 7, 7);
	arr[31] = new Tot(false, 7, 9);
	
}
void BanCo::Incachdi()
{
	cout << "\nNhap quan co ";
	int index;
	cin >> index;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (index == i)
		{
			arr[i]->Xuat();
			break;
		}
	}
}
