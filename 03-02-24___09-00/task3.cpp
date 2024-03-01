#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long int num = 7435421243;
    for (int i = 0; i < 3; i++) {
        num /= 1024;
        cout << num << endl;
    }
}
