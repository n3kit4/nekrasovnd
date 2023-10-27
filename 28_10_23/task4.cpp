#include <iostream>
using namespace std;

int main()
{
    int x, x1, x2, x3, result;
    cin >> x;
    x1 = x / 100;
    x2 = x / 10 % 10;
    x3 = x % 10;
    result = x1 * x2 * x3;
    cout << result;
}
