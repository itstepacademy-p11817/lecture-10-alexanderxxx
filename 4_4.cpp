#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	setlocale(0, "");
	double cost, summ;
	int min, sec;
	cout << "���� ������ ���������:";
	cin >> cost;
	cout << "�����:";
	cin >> min;
	cout << "������:";
	cin >> sec;
	summ = (double)cost*min + (double)sec / 60;
	cout << "��������� ���������: " << summ << '\n';
	system("pause");
	return 0;
}