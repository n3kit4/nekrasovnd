#include <iostream>
using namespace std;

int main()
{
    int x, res = 1;
    cout << "Enter number: ";
    cin >> x;
    for (int i = 1; i <= x; i++)
        res *= i;
    cout << res;
}
