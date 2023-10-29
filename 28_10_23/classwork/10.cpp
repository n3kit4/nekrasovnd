#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    const int l = 5;
    int i;
    double a[l];
    cout << "Введите 5 элементов массива через Enter: " << endl;
    for (i = 0; i < l; i++)
        cin >> a[i];
    cout << "Элементы массива, которые больше предыдущего: " << endl;
    for (i = 1; i < l; i++)
        if (a[i] > a[i - 1])
            cout << a[i] << " (> " << a[i - 1] << ")\n";
}
