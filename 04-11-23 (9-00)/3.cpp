#include <iostream>
#include <string>
using namespace std;

void f(string n, int k)
{
	int i = 0;
	for (i; i < k; i++)
		cout << n[i];
}

int main()
{
	setlocale(LC_ALL, "Russian");
	string n;
	int k;
	cout << "Введите число: " << endl;
	cin >> n;
	cout << "Введите сколько первых цифр показать: " << endl;
	cin >> k;
	f(n, k);
}
