#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Numbers (from 35 to 86) that are divisible by 7 with a remainder of 1, 2 or 5" << endl;
    for (a = 35; a < 87; a++)
    {
        int remainder = a % 7;
        if (remainder == 1 or remainder == 2 or remainder == 5)
            cout << a << endl;
    }
}
