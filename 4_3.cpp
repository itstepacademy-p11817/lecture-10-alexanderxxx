#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	setlocale(0, "");
	int dl=0, dist=0;
	double time=0.0, speed=0.0;
	cout << "Вычисление скорости бега" << '\n' << "Введите длину дистанции (метров):";
	cin >> dist;
	cout << "Введите время (мин.сек):";
	cin >> time;
	cout << "Дистанция=" << dist << " м ";
	int c = time * 100 - time * 100;
	int sec = time * 60 + c;
	cout << "Время:" << time << "минут " << c << "секунд. = " << sec << "секунд" << '\n';
	speed = (double)dist / sec;
	double sp = speed / 1000 * 3600;
	cout << "Вы бежали со скоростью " << sp << "км/ч" << '\n';
	system("pause");
	return 0;
}