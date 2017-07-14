#include <iostream>
#include <stdlib.h>

int main()
{
	setlocale(0, "");
	int rassab=0, rassbc=0, mass=0, ras=0;
	std::cout << "Расстояние между пунктами А и Б:";
	std::cin >> rassab;
	std::cout << "Расстояние между пунктами Б и С:";
	std::cin >> rassbc;
	std::cout << "Вес груза:";
	std::cin >> mass;
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
	if (ras == -1)
		std::cout << "Самолёт перегружен и следовательно хрен взлетит" << '\n';
	else if (zab > 300)
		std::cout << "Хрен долетит до пункта Б" << '\n';
	else if (zbc > 300)
		std::cout << "Хрен долетит до пункта С" << '\n';
	else if (doz <= 0)
		std::cout << "Дозаправка не требуется" << '\n';
	else
		std::cout << "Надо долить" << doz << " литров топлива" << '\n';
	
	system("pause");
	return 0;
}