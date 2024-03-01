#include <iostream>
using namespace std;

int main()
{
    int s = 0;
    for (int i = 1; i < 101; i++) {
        s += i * i;
    }
    cout << s;
}    
