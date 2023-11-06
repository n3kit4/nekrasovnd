#include <iostream>
#include <math.h>
using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	double x, y, y1;
	cout << "Введите x: ";
	cin >> x;
	y = x;
	y1 = x;
	do
	{
		y = y1;
		y1 = 0.5 * (y + 3 * x / (2 * y * y + x / y));
	}
	while (abs(y1 - y) > 1/100000);
	cout << "Корень кубический из x = " << y;
}
