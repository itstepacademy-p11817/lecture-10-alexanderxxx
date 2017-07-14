#include <iostream>
#include <stdlib.h>
using namespace std;


int main()
{
	setlocale(0, "");
	int m1=0, m2=0, m3=0, pr1=0, pr2=0, pr3=0, z1=0 ,z2=0 ,z3=0;

	cout << "Уровень продаж 1 менеджера:";
	cin >> m1;
	cout << "Уровень продаж 2 менеджера:";
	cin >> m2;
	cout << "Уровень продаж 3 менеджера:";
	cin >> m3;

	if (m1 <= 500)
		pr1 = 3;
	else if (m1 <= 1000)
		pr1 = 5;
	else if (m1 > 1000)
		pr1 = 8;
	

	if (m2 <= 500)
		pr2 = 3;
	else if (m2 <= 1000)
		pr2 = 5;
	else if (m2 > 1000)
		pr2 = 8;
	

	if (m1 <= 500)
		pr3 = 3;
	else if (m3 <= 1000)
		pr3 = 5;
	else if (m3 > 1000)
		pr3 = 8;

	z1 = m1*pr1 / 100 + 200;
	z2 = m2*pr2 / 100 + 200;
	z3 = m3*pr3 / 100 + 200;

	if ((m1 > m2) && (m1 > m3))
		z1 += 200;
	else if ((m2 > m1) && (m2 > m3))
		z2 += 200;
	else if ((m3 > m1) && (m3 > m2))
		z3 += 200;

	cout << "Зарплата 1 менеджера: " << z1 << "$" << '\n';
	cout << "Зарплата 2 менеджера: " << z2 << "$" << '\n';
	cout << "Зарплата 3 менеджера: " << z3 << "$" << '\n';

	system("pause");
	return 0;
}


