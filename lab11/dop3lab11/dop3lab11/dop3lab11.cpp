#include <iostream>
using namespace std;
//3
int main()
{
	setlocale(LC_ALL, "Rus");
    const int maxSize = 99;
    int n, a[maxSize], b[maxSize], t;
	cout << "Введите размер массива(99) ", cin >> n;
	if (n > maxSize) return 0;
	cout << "Массив А: ";
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 99;
		cout << a[i] << " ";
	}
	cout << "\nМассив B: ";
	for (int i = 0; i < n; i++)
	{
		b[i] = rand() % 99;
		cout << b[i] << " ";
	}
	int kA = 0, kB = 0;
	cout << "\nВведите значение: \n", cin >> t;
	bool j = true;
	for (int i = 0; i < n; i++)
	{
		if (a[i] <= t) {
			kA++;
			j = false;
		} else if (b[i] <= t) {
			kB++;
			j = false;
		}
	} 
	
	if (j) {
		cout << "Нет такого числа в массиве";
	}
	if (kA > kB) {
		cout << "Массив А: ";
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
		cout << "Массив B: ";
		for (int i = 0; i < n; i++)
		{
			cout << b[i] << " ";
		}
	}
	else if (kA < kB) {
		cout << "Массив B: ";
		for (int i = 0; i < n; i++)
		{
			cout << b[i] << " ";
		}
		cout << endl;
		cout << "Массив А: ";
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
	} 
	else if (kA == kB) {
		cout << "Массив А: ";
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
		cout << "Массив B: ";
		for (int i = 0; i < n; i++)
		{
			cout << b[i] << " ";
		}
	}
 	return 0;
}
