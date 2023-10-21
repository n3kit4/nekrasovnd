#include <iostream>
using namespace std;

int main()
{
	cout << "Enter number: ";
	int a;
	cin >> a;
	int a1 = a / 10;
	int a2 = a % 10;
	if (a1 > a2)
		cout << "Max character: " << a1 << endl << "Min character: " << a2 << endl;
	else if (a2 > a1)
		cout << "Max character: " << a2 << endl << "Min character: " << a1 << endl;
	else
		cout << "Characters are the same" << endl;
}