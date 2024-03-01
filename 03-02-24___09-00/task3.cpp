#include <iostream>
using namespace std;

int main()
{
    float num = 7435421243;
    for (int i = 0; i < 3; i++) {
        num /= 1024; 
        cout << num << "\t";
        printf("%.5f\n", num);
    }
}
