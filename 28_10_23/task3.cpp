#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = 1;
    int summa = 0;
    while (a <= n)
    {
        summa += a;
        a += 1;
    }
    cout << summa << endl;
}
