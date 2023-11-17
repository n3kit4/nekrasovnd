#include <iostream>
using namespace std;

int min_common_divisor(int n, int m)
{
	int min;
	if (n > m)
		min = m;
	else
		min = n;
	for (int i = 2; i <= min; i++)
		if (n % i == 0 and m % i == 0)
			return i;
	return 1;
}

int main()
{
	int N, M;
	cin >> N >> M;
	N--;
	M--;
	cout << M + N - min_common_divisor(N, M);
}
