#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	setlocale(0, "");
	double vv;
	int  g, c;
	cin >> vv;
	g = vv;
	c = vv * 100 - g * 100;
	cout << g << "grn. " << c << "cop";
	system("pause");
	return 0;
}