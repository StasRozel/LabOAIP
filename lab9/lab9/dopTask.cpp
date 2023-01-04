#include "dopTask.h";
using namespace std;
void dopTask1() {
	// доп2
	cout << "Доп задание 1(№2)\n";
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
		cout << "|";
		for (int i = kmax; i >= kmin; i--)
		{
			cout << a[i] << " ";
		}
		cout << "|";
		for (int i = kmax; i < n; i++)
		{
			cout << a[i] << " ";
		}
		
	} else if (kmax < kmin) {
		for (int i = 0; i < kmax; i++)
		{
			cout << a[i] << " ";
		}
		cout << "|";
		for (int i = kmin; i >= kmax; i--)
		{
			cout << a[i] << " ";
		}
		cout << "|";
		for (int i = kmin + 1; i < n; i++)
		{
			cout << a[i] << " ";
		}
	}
}
void dopTask2() {
	cout << "\nДоп задание 2(№7)\n";
	int n, i, a[99], sum = 0, arfm;
	cout << "Введите размер массива (не более 99)" << endl;
	cin >> n;
	if (n > 99) return;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
	{
		a[i] = rand() % 99;
		sum += a[i];
		cout << a[i] << " ";
		
	}
	arfm = sum / n;
	cout << endl;
	cout << "Среднее арифметическое " << arfm << endl;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > arfm) {
			cout << a[i] << " ";
		}
	}
	cout << "|";
	for (int i = 0; i < n; i++)
	{
		if (a[i] < arfm) {
			cout << a[i] << " ";
		}
	}
}

void dopTask3() {
	cout << "\nДоп задание 3(№6)\n";
	double d, f[12];
	int n, a[99];
	d = (1 + sqrt(5)) / 2;
	cout << "Введите размер массива (не более 99)" << endl;
	cin >> n;
	if (n > 99) return;
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 99;
		cout << a[i] << " ";
	}
	cout << endl;
	for (int j = 0; j <= 11; j++)
	{
		int c = (pow(d, j) - pow((-d), -j)) / (2 * d - 1);
		f[j] = c;
	}
	for (int i = 0; i < n; i++)
	{
		
		for (int j = 0; j <= 11; j++) {
			if (a[i] == f[j]) {
				cout << "Номер числа Фибоначчи " << i + 1 << endl;
				cout << "Числа Фибоначчи " << a[i] << endl;
			}
		}
		
	}
}
