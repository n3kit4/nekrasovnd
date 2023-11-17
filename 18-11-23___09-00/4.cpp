#include <iostream>
using namespace std;

int main()
{
	int length, a, b, c;
	cin >> length;
	int* A = new int [length];
	for (int i = 0; i < length; i++)
		A[i] = 0;
	for (int i = 1; i <= (length + 1); i++)
	{
		cin >> a >> b >> c;
		a--;
		b--;
		for (a; a <= b; a++)
			A[a] += c;
	}
	for (int i = 0; i < length; i++)
		cout << A[i] << " ";
}
