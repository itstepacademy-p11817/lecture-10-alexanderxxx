#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	setlocale(0, "");
	int rassab, rassbc, mass, ras;
	cout << "���������� ����� �������� � � �:";
	cin >> rassab;
	cout << "���������� ����� �������� � � �:";
	cin >> rassbc;
	cout << "��� �����:";
	cin >> mass;
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
	if (ras = -1)
		cout << "������ ���������� � ������������� ���� �������" << '\n';
	else if (zab > 300)
		cout << "���� ������� �� ������ �" << '\n';
	else if (zbc > 300)
		cout << "���� ������� �� ������ �" << '\n';
	else if (doz <= 0)
		cout << "���������� �� ���������" << '\n';
	else
		cout << "���� ������" << doz << " ������ �������" << '\n';
	
	system("pause");
	return 0;
}