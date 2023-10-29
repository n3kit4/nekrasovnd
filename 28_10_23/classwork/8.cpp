#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    const int l = 5;
    int i, a[l], K = 0, k = 0;
    cout << "Введите 5 элементов массива через Enter: " << endl;
    for (i = 0; i < l; i++)
    {
        cin >> a[i];
        if (a[i] > 0)
            K += 1;
        if (a[i] < 0)
            k += 1;
    }
    cout << "Количество положительных элементов: " << K << endl;
    cout << "Количество отрицательных элементов: " << k << endl;
}
