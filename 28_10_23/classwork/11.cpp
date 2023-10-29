#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    const int l = 5;
    int i;
    double a[l], x, y;
    cout << "Введите 5 элементов массива через Enter: " << endl;
    for (i = 0; i < l; i++)
        cin >> a[i];
    cout << "Задайте предел поиска в виде 'x y', где x - начало, а y - конец" << endl;
    cin >> x >> y;
    cout << "Индексы элементов массива, которые лежат в указанном пределе: " << endl;
    for (i = 0; i < l; i++)
    {
        if (a[i] <= y and a[i] >= x)
            cout << i << endl;
    }
}
