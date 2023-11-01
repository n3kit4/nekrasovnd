#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n = 1, i = 1, k, sum = 0;
	cout << "Введите N и k через пробел: ";
	cin >> n >> k;
	while (i <= n)
	{
		sum += i * k;
		i++;
	}
	cout << sum;
}
