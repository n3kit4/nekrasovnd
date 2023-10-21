#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	if (x > 0)
		if (y > 0)
			cout << "I";
		else
			cout << "IV";
	else
		if (y > 0)
			cout << "II";
		else
			cout << "III";
}