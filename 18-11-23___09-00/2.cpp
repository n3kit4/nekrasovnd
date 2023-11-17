#include <iostream>
using namespace std;

int max_common_divisor(int n, int m)
{
	int min;
	if (n > m)
		min = m;
	else
		min = n;
	int mcd;
	for (int i = 1; i <= min; i++)
		if (n % i == 0 and m % i == 0)
			mcd = i;
	return mcd;
}

int main()
{
	int N, M;
	cin >> N >> M;
	N--;
	M--;
	cout << M + N - max_common_divisor(N, M);
}
