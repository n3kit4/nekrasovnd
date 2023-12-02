#include <iostream> 
 
using namespace std; 
void Memory(int n) 
{ 
 double* array = new double[n]; 
} 
void CinArray(int n, double *array) 
{ 
 for (int i = 0; i < n; ++i) 
  cin >> *(array + i); 
} 
 
void CoutArray(int n, double *array) 
{ 
 for (int i = 0; i < n; ++i) 
  cout << *(array + i) << " "; 
} 
 
void DeleteMemory(double *array) 
{ 
 delete[] array; 
} 
int main() 
{ 
 while (true) 
 { 
  cout << "Do you want to continue?" << endl; 
  cout << "Enter '+' or '-'" << endl; 
  char answer; 
  cin >> answer; 
  if (answer == '+') 
  { 
   int n;; 
   double array[1]; 
   cin >> n; 
   Memory(n); 
   CinArray(n, array); 
   CoutArray(n, array); 
   //DeleteMemory(array); 
  } 
  else 
   break; 
 } 
}
