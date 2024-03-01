#include <iostream>
using namespace std;

int main()
{
    int num, s = 0;
    cin >> num;
    while (num > 0) {
        s += num % 10;
        num /= 10;
    }
    cout << s;
}    
