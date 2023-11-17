#include <iostream>
using namespace std;

int main() {
    long long r;
    cin >> r;
    long long k = 0;
    for (long long i = 0;i < r;i++) {
        k += ceil(sqrt(r * r - i * i));
    }
    long long result = k * 4;
    cout << result;
}
