#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	setlocale(0, "");
	double cost=0.0, summ=0.0;
	int min=0, sec=0;
	cout << "Цена минуты разговора:";
	cin >> cost;
	cout << "Минут:";
	cin >> min;
	cout << "Секунд:";
	cin >> sec;
	summ = cost*min + (double)sec / 60;
	cout << "Стоимость разговора: " << summ << '\n';
	system("pause");
	return 0;
}