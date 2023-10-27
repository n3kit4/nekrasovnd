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
	int x;
	for (x = 1000; x < 10000; x++)
		if (summa_cifr(x) == 15)
			cout << x << endl;
}
