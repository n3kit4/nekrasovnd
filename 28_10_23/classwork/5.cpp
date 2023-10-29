#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    const int l = 5;
    int i, a[l], max, min;
    cout << "Введите 5 элементов массива через Enter: " << endl;
    for (i = 0; i < l; i++)
        cin >> a[i];
    max = a[0];
    min = a[0];
    for (i = 0; i < l; i++)
    {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    cout << "max = " << max << ", min = " << min << endl;
}
