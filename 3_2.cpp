#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	double l, r, s, pi = 3.14;
	cout << "L:";
	cin >> l;
	r = l / 2 * pi;
	s = pi*r * 2;
	cout << "S=" << s << '\n';
	system("pause");
	return 0;
}