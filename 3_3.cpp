#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	setlocale(0, "");
	double v, t, a, s;
	cout << "��������:";
	cin >> v;
	cout << "�����:";
	cin >> t;
	cout << "���������:";
	cin >> a;
	s = v*t + (a*t * 2) / 2;
	cout << "���������� ���������� ��� ������������� ��������������� ��������=" << s << '\n';
	system("pause");
	return 0;
}