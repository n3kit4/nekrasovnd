#include <iostream>
using namespace std;

int main()
{
    int x, k;
    cin >> x;
    k = 0;
    while (x > 0)
    {
        if (x % 10 % 2 == 0)
            k += 1;
        x /= 10;
    }
    cout << k;
}
