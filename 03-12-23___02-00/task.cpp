#include <iostream> 
using namespace std;

void AllocateMemory(int n)
{
	double* arr = new double[n];
}
void EnteringElements(int n, double* arr)
{
	for (int i = 0; i < n; ++i)
		cin >> *(arr + i);
}

void OutputOfElements(int n, double* arr)
{
	for (int i = 0; i < n; ++i)
		cout << *(arr + i) << endl;
}

void FreeMemory(double* arr)
{
	delete [] arr;
}
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	while (true)
	{
		cout << "Введите 1, если хотите продолжить; 0 - если закончить: ";
		int answer;
		cin >> answer;
		if (answer == 1)
		{
			int n;
			double arr[1];
			cout << "Введите длину: ";
			cin >> n;
			AllocateMemory(n);
			EnteringElements(n, arr);
			cout << "Полученный массив: " << endl;
			OutputOfElements(n, arr);
			//FreeMemory(arr); 
		}
		else
			break;
	}
}
