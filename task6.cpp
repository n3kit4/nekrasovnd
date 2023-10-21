#include <iostream>
using namespace std;

int main()
{
	while (true)
	{
		cout << "Enter number: ";
		int number;
		cin >> number;
		int num1 = number / 100;
		int num2 = number / 10 % 10;
		int num3 = number % 10;
		if (num1 == num2 or num1 == num3 or num2 == num3)
			cout << "Entered number HAS the same character" << endl;
		else
			cout << "Entered number DOESN'T HAVE the same character" << endl;
	}
}