#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	setlocale(0, "");
	double v, t, a, s;
	cout << "Скорость:";
	cin >> v;
	cout << "Время:";
	cin >> t;
	cout << "Ускорение:";
	cin >> a;
	s = v*t + (a*t * 2) / 2;
	cout << "Пройденное расстояние при прямолинейном равноускоренном движении=" << s << '\n';
	system("pause");
	return 0;
}