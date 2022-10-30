#include <iostream>
using namespace std;

void task1() {
	int i, n;
	cout << "Введите число ";
	cin  >> n;

	for (i = 1; i <= n; i++)
		if (n % i == 0)
			printf("%d" "\n",  i);
}

void dop1() {
	int n;
	do {
		cout << "n = ";
		cin >> n;
	} while (n < 1);

	int buf = n;
	;
	for (int i = 2; i <= buf;) {

		int flag = 1;
		for (int j = 2; j < i; ++j)
			if (i % j == 0 && i != j) {
				flag = 0;
				break;
			}
		
		if (flag == 1 && buf % i == 0) {
			
			cout << i << endl;
			buf /= i;
		}
		else
			++i;
	}
}

void dop2() {
	double s1, s2;
	cout << "Кол-во воды в первом сосуде ";
	cin >> s1;
	cout << "Кол-во воды во втором сосуде ";
	cin >> s2;
	for (int i = 1; i <= 4; i++)
	{
		s1 /= 2;
		s2 += s1;
		s2 /= 2;
		s1 += s2;

	}
	cout << "В первом сосуде " << s1 << endl << "Во втором сосуде " << s2 << endl;
}

void dop3() {
	cout << "Задание 4" << endl;
	int a, b, c, d;
	for (int f = 1000; f <= 9999; f++)
	{
		a = f / 1000;
		b = f / 100 % 10;
		c = f / 10 % 10;
		d = f % 1000 % 10;

		if (a == d && a != b && b == c && f % 2 == 0 && f % 7 == 0 && f % 11 == 0 && a + b + c + d == 30)
		{
			cout << "Номер " << f << endl;
		}
	}
}

int main()
{	
	setlocale(LC_ALL, "Rus");
    /*double b = 3, c = 6 * pow(10, -4),
		a = 6, i = 8, t, x;
	while (i <= 24)
	{
		t = a * i / (pow(a, 2) - b) * exp(-a);
		if (t > 5 * c) {
			x = 4, 8 * pow(10, -3) + i * a;
			cout << t << endl << x << endl;
		}
		else if (t <= 5 * c) {
			x = a + pow(i, 2) * t;
			cout << t << endl << x << endl;
		}
		i += 8;
		
	}

	task1();*/
	dop1();
	dop2();
	dop3();
}

