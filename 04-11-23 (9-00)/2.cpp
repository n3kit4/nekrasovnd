#include <iostream>, <math.h>
using namespace std;

void f(int X1, int X2, int X3, int Y1, int Y2, int Y3)
{
	double x1_x2 = pow(X1 - X2, 2) + pow(Y1 - Y2, 2); //стороны в квадрате
	double x1_x3 = pow(X1 - X3, 2) + pow(Y1 - Y3, 2);
	double x2_x3 = pow(X3 - X2, 2) + pow(Y3 - Y2, 2);
	cout << "Четвёртая вершина квадрата: ";
	if (x1_x2 + x1_x3 == x2_x3)
		cout << X2 << " " << Y3;
	else if (x1_x2 + x2_x3 == x1_x3)
		cout << X1 << " " << Y3;
	else if (x1_x3 + x2_x3 == x1_x2)
		cout << X2 << " " << Y1;
	else
		cout << "Ошибка\n!Точки не являются вершинами квадрата!";
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int x1, x2, x3, y1, y2, y3;
	cout << "Введите координаты точки x и y через пробел: ";
	cin >> x1 >> y1;
	cout << "Введите координаты точки x и y через пробел: ";
	cin >> x2 >> y2;
	cout << "Введите координаты точки x и y через пробел: ";
	cin >> x3 >> y3;
	f(x1, x2, x3, y1, y2, y3);
}
