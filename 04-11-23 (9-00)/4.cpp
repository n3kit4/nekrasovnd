#include <iostream>, <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double result = 1 + 1;
	int k;
	cout << "Введите количество элементов дроби: ";
	cin >> k;
	for (int i = 2; i <= k; i++)
	{
		result = 1 + 1 / result;
	}
	cout << "Результат: " << result;
}
