#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	setlocale(0, "");
	int dl, dist;
	double time, speed;
	cout << "���������� �������� ����" << '\n' << "������� ����� ��������� (������):";
	cin >> dist;
	cout << "������� ����� (���.���):";
	cin >> time;
	cout << "���������=" << dist << " � ";
	int m = time;
	int c = time * 100 - m * 100;
	int sec = m * 60 + c;
	cout << "�����:" << m << "����� " << c << "������. = " << sec << "������" << '\n';
	speed = (double)dist / sec;
	double sp = speed / 1000 * 3600;
	cout << "�� ������ �� ��������� " << sp << "��/�" << '\n';
	system("pause");
	return 0;
}