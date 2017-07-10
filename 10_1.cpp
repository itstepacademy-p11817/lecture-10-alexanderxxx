#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	setlocale(0, "");
	int rassab, rassbc, mass, ras;
	cout << "Расстояние между пунктами А и Б:";
	cin >> rassab;
	cout << "Расстояние между пунктами Б и С:";
	cin >> rassbc;
	cout << "Вес груза:";
	cin >> mass;
	if (mass < 500)
		ras = 1;
	else if (mass < 1000)
		ras = 4;
	else if (mass < 1500)
		ras = 7;
	else if (mass <= 2000)
		ras = 9;
	else if (mass > 2000)
		ras = -1;
	int zab = rassab*ras, zbc = rassbc*ras, zac=zab+zbc;
	int doz = zac - 300;
	if (ras = -1)
		cout << "Самолёт перегружен и следовательно хрен взлетит" << '\n';
	else if (zab > 300)
		cout << "Хрен долетит до пункта Б" << '\n';
	else if (zbc > 300)
		cout << "Хрен долетит до пункта С" << '\n';
	else if (doz <= 0)
		cout << "Дозаправка не требуется" << '\n';
	else
		cout << "Надо долить" << doz << " литров топлива" << '\n';
	
	system("pause");
	return 0;
}