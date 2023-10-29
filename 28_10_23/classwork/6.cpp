#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    const int l = 5;
    int i, a[l], max, min, i_max, i_min;
    cout << "Введите 5 элементов массива через Enter: " << endl;
    for (i = 0; i < l; i++)
        cin >> a[i];
    max = a[0];
    i_max = 0;
    min = a[0];
    i_min = 0;
    cout << "Массив до изменения:" << endl;
    for (i = 0; i < l; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            i_max = i;
        }
        if (a[i] < min)
        {
            min = a[i];
            i_min = i;
        }
        cout << a[i] << endl;
    }
    a[i_max] = min;
    a[i_min] = max;
    cout << "Массив после изменения:" << endl;
    for (i = 0; i < l; i++)
        cout << a[i] << endl;
}
