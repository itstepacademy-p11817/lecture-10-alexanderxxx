#include <iostream>
#include <stdlib.h>
using namespace std;


int main()
{
	setlocale(0, "");
	int m1, m2, m3, pr1, pr2, pr3, z1 ,z2 ,z3;

	cout << "������� ������ 1 ���������:";
	cin >> m1;
	cout << "������� ������ 2 ���������:";
	cin >> m2;
	cout << "������� ������ 3 ���������:";
	cin >> m3;

	if (m1 <= 500)
		pr1 = 3;
	else if ((m1 > 500) & (m1 <= 1000))
		pr1 = 5;
	else if (m1 > 1000)
		pr1 = 8;
	

	if (m2 <= 500)
		pr2 = 3;
	else if ((m2 > 500) & (m2 <= 1000))
		pr2 = 5;
	else if (m2 > 1000)
		pr2 = 8;
	

	if (m1 <= 500)
		pr3 = 3;
	else if ((m3 > 500) & (m3 <= 1000))
		pr3 = 5;
	else if (m3 > 1000)
		pr3 = 8;

	z1 = m1*pr1 / 100 + 200;
	z2 = m2*pr2 / 100 + 200;
	z3 = m3*pr3 / 100 + 200;

	if ((m1 > m2) & (m1 > m3))
		z1 += 200;
	else if ((m2 > m1) & (m2 > m3))
		z2 += 200;
	else if ((m3 > m1) & (m3 > m2))
		z3 += 200;

	cout << "�������� 1 ���������: " << z1 << "$" << '\n';
	cout << "�������� 2 ���������: " << z2 << "$" << '\n';
	cout << "�������� 3 ���������: " << z3 << "$" << '\n';

	system("pause");
	return 0;
}


