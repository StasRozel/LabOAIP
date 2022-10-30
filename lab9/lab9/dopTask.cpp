#include "dopTask.h";
using namespace std;
void dopTask1() {
	cout << "Доп задание 1\n";
	int n, i, a[99], max = 0, kmax = 0,
		min = 0, kmin = 0;
	cout << "Введите размер массива (не более 99)" << endl;
	cin >> n;
	if (n > 99) return;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
	{
		a[i] = rand() % 99;
		cout << a[i] << " ";
	}
	for (i = 1; i < n; i++)
		if (a[i] > a[kmax]) {
			kmax = i;
			max = a[kmax];
		}
	for (i = 1; i < n; i++)
		if (a[i] < a[kmin]) {
			kmin = i;
			min = a[kmin];

		}
	cout << endl << "min " << min << endl << "max " << max << endl;
	if (kmax > kmin) {
		

		for (int i = 0; i < kmin; i++)
		{
			cout << a[i] << " ";
		}



		for (int i = kmax; i > kmin; i--)
		{
			cout << a[i] << " ";
		}
		for (int i = kmin; i < kmax; i++)
		{
			cout << a[i] << " ";
		}
	} else {
		for (int i = kmin; i < kmax; i++)
		{
			cout << a[i] << " ";
		}
	}
}
void dopTask2() {
	cout << "Доп задание 2\n";
	int n, i, a[99], x = 1;
	cout << "Введите размер массива (не более 99)" << endl;
	cin >> n;
	if (n > 99) return;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
	{
		a[i] = rand() % 2;
		
		cout << a[i] << " " << endl;
	}
	cout << "-------------------\n";
	for (i = 0; i < n; i++)
	{
		x = 1;
		if (a[i] == a[i + 1])
		{
			x += 1;
			cout << a[i] << "повторяется " << x << endl;
			
		}
	}
	
}

void dopTask3() {
	int a, b, c, d, i;
	a = 1;
	b = 0;
	for (i = b; i <= 89;)
	{
		i += a;
		b = i;
		a = i; 
		cout << i << endl;
	}
}