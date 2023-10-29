#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    const int l = 5;
    int i;
    double a[l];
    double sum = 0;
    cout << "Введите 5 элементов массива через Enter: " << endl;
    for (i = 0; i < l; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    double av_ar = sum / 5.0;
    cout << "Числа в массиве больше среднего арифметического = " << av_ar << ": " << endl;
    for (i = 0; i < l; i++)
        if (a[i] > av_ar)
            cout << a[i] << endl;
}
