#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	setlocale(0, "");
	double cost, summ;
	int min, sec;
	cout << "Цена минуты разговора:";
	cin >> cost;
	cout << "Минут:";
	cin >> min;
	cout << "Секунд:";
	cin >> sec;
	summ = (double)cost*min + (double)sec / 60;
	cout << "Стоимость разговора: " << summ << '\n';
	system("pause");
	return 0;
}