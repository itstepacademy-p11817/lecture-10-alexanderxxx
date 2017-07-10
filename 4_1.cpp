#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	setlocale(0, "");
	long vvs, h, m, s;
	cout << "Время в секундах";
	cin >> vvs;
	h = vvs / 3600;
	m = (vvs - h * 3600) / 60;
	s = vvs - h * 3600 - m * 60;
	cout << h << "Часов  " << m << "Минут  " << s << "Секунд  ";
	system("pause");
	return 0;
}