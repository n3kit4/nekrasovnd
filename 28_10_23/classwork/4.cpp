#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	const int l = 5;
	int i; double a[l];
	cout << "Введите 5 элементов массива через Enter: " << endl;
	for (i = 0; i < l; i++)
		cin >> a[i];
	double max = a[0];
	for (i = 0; i < l; i++)
		if (a[i] > max)
			max = a[i];
	for (i = 0; i < l; i++)
	{
		a[i] /= max;
		cout << a[i] << endl;
	}
}
