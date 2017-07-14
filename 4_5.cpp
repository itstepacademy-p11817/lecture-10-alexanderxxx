#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	setlocale(0, "");
	int d=0, n=0, vd=0;
	cout << "Количество дней:";
	cin >> vd;
	n = vd / 7;
	d = vd % 7;
	cout << n << " недель" << d << "дней" << '\n';
	system("pause");
	return 0;
}