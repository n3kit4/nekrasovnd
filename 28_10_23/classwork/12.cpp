#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    const int l = 10;
    int i, k = 1, k_max = 1;
    double a[l];
    cout << "Введите 10 элементов массива через Enter: " << endl;
    for (i = 0; i < l; i++)
        cin >> a[i];
    for (i = 1; i < l; i++)
    {
        if (a[i] == a[i - 1])
            k += 1;
        else
            k = 1;
        if (k > k_max)
            k_max = k;
    }
    cout << "Наибольшая длина последовательности, состоящей из одинаковых элементов: " << k_max;
}
