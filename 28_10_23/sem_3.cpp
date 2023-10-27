#include <iostream>
using namespace std;

int summa_cifr(int a)
{
	int summa = 0;
	while (a > 0)
	{
		summa += a % 10;
		a /= 10;
	}
	return(summa);
}

int main()
{
	int x, x1, x2_sm, x2_bi;
	cin >> x;
	x1 = x / 1000;
	x2_sm = x % 1000 - 1;
	x2_bi = x % 1000 + 1;
	if (summa_cifr(x1) == summa_cifr(x2_sm) or summa_cifr(x1) == summa_cifr(x2_bi))
		cout << "Yes";
	else
		cout << "No";
}
