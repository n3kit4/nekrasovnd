#include <iostream>
using namespace std;

int main()
{
	int x, max_cifra;
	cin >> x;
	max_cifra = 0;
	while (x > 0)
	{
		int cifra = x % 10;
		if (cifra > max_cifra)
			max_cifra = cifra;
		x /= 10;
	}
	cout << max_cifra;
}
