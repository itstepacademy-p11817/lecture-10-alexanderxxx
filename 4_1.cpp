#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	setlocale(0, "");
	long vvs, h, m, s;
	cout << "����� � ��������";
	cin >> vvs;
	h = vvs / 3600;
	m = (vvs - h * 3600) / 60;
	s = vvs - h * 3600 - m * 60;
	cout << h << "�����  " << m << "�����  " << s << "������  ";
	system("pause");
	return 0;
}