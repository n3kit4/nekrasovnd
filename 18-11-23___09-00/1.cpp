#include <iostream>
using namespace std;

int main()
{
	int length, sum = 0, max_sum = 0;
	cin >> length;
	int* A = new int[length];
	for (int i = 0; i < length; i++)
		cin >> A[i];
	for (int i = 0; i < length; i++)
	{
		int j = i;
		for (j; j < length; j++)
		{
			sum += A[j];
			if (sum > max_sum)
				max_sum = sum;
		}
		sum = 0;
	}
	cout << max_sum;
}
