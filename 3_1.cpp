#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	double r0, r1, r2, r3, o;
	cout << "R1:";
	cin >> r1;
	cout << "R2:";
	cin >> r2;
	cout << "R3:";
	cin >> r3;
	r0 = 1 / r1 + 1 / r2 + 1 / r3;
	o = 1 / r0;
	cout << "R0=" << o << '\n';
	system("pause");
	return 0;
}