#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int x, i = 1, k = 0;
	cout << "Введите число: ";
	cin >> x;
	while (i <= x)
	{
		if (x % i == 0)
			k += 1;
		i++;
	}
	if (k > 2)
		cout << "Yes";
	else
		cout << "No";
}
