/*#include <iostream>
#include <math.h>
using namespace std;

int main() {

    double n = 2., k = 2., s;

    cin >> n, k;

    for(double i = 1.; i <= n; i++) {
        s += pow(i, k);
    }

    cout << s;
}*/

// после конца дедлайна сделал код покрасивее, но и первый работает

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, i = 1, k;
	double sum = 0, f;
	cout << "Введите N и k через пробел: ";
	cin >> n >> k;
	while (i <= n)
	{
		f = pow(i, k);
		sum += f;
		i++;
	}
	cout << sum;
}
