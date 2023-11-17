#include <iostream>
using namespace std;

int main()
{
	int length, min = 100000000;
	cin >> length;
	int* A = new int[length];
	for (int i = 0; i < length; i++)
	{
		cin >> A[i];
		if (A[i] < min)
			min = A[i];
	}
	cout << "\n" << min;
}
