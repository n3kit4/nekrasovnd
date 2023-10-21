#include <iostream>
using namespace std;

//number 2
int main()
{
	int a, b;
	cout << "Enter 2 numbers separated by a space: ";
	cin >> a >> b;
	int eq1 = b / 4 - b / 100 + b / 400;
	int eq2 = (a - 1) / 4 - (a - 1) / 100 + (a - 1) / 400;
	cout << "This intervsl has " << eq1 - eq2 << " leap year(s)" << endl;
}