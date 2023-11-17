#include <iostream>
using namespace std;

int main()
{
  int length;
  cin >> length;
  int* a = new int[length];
  for (int i = 0; i < length; i++)
  {
    cin >> a[i];
  }
  int i, j, q;
  cin >> q;
  int* g = new int[q];
  for (int f = 0; f < q; f++)
  {
    cin >> i >> j;
    i--;
    j--;
    int sum = 0;
    for (i; i <= j; i++)
      sum += a[i];
    g[f] = sum;
  }
  for (int i = 0; i < q; i++)
    cout << g[i] << endl;
}
