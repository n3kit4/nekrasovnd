#include <iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;
	int x1 = x / 10000;
	int x2 = x % 10000 / 1000;
	int x3 = x % 1000 / 100;
	int x4 = x % 100 / 10;
	int x5 = x % 10;
	if (x1 == x5 and x2 == x4)
		cout << "TRUE";
	else
		cout << "FALSE";
}