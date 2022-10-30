#include <locale>
#include <iostream>
#include "dopTask.h"
using namespace std;
void task1() {
	cout << "Задание 1\n";
	const int maxSize = 99;
	int n, i, a[maxSize], max = 0, kmax = 0;
	cout << "Введите размер массива (не более 99)" << endl;
	cin >> n;
	if (n > 99) return;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
	{
		a[i] = rand() % 99;
		cout << a[i] << " ";
	}
	cout << endl;
	for (i = 1; i < n; i++)
		if (a[i] > a[kmax]) {
			kmax = i;
			max = a[kmax];
		}
	cout << "Максимальный элемент " << max << endl;
	cout << "После: " << endl;
	for (i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			a[i] = max;
		}
		cout << a[i] << " ";
	}
}

void task2() {
	cout << "Задание 2\n";
	const int maxSize = 99;
	int n, i, a[maxSize], max = 0, kmax = 0, sum = 0;
	cout << "Введите размер массива (не более 99)" << endl;
	cin >> n;
	if (n > 99) return;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
	{
		a[i] = rand() % 99;
		cout << a[i] << " " << endl;
		sum = (a[n - 1] + a[n - 2] + a[n - 3]) / 3;
		
	}
	cout << "Среднее арифметическое: " << sum << endl;
	for (i = 0; i < n; i++)
	{
		if (sum == a[i])
		{
			cout << a[i] << endl;
		}
		
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	
	//task1();
	//task2();
	dopTask1();
}

