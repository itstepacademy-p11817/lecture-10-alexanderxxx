#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	setlocale(0, "");
	int dl, dist;
	double time, speed;
	cout << "Вычисление скорости бега" << '\n' << "Введите длину дистанции (метров):";
	cin >> dist;
	cout << "Введите время (мин.сек):";
	cin >> time;
	cout << "Дистанция=" << dist << " м ";
	int m = time;
	int c = time * 100 - m * 100;
	int sec = m * 60 + c;
	cout << "Время:" << m << "минут " << c << "секунд. = " << sec << "секунд" << '\n';
	speed = (double)dist / sec;
	double sp = speed / 1000 * 3600;
	cout << "Вы бежали со скоростью " << sp << "км/ч" << '\n';
	system("pause");
	return 0;
}