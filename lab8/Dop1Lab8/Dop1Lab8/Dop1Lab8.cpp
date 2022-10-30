#include <iostream> 
using namespace std;
//Вариант 5
double F(double x)
{
	return (5 - pow(x, 2));
}

double F1(double x)
{
	return (2 - pow(x, 2) - x);
}

double F1_1(double x) {
	return (-2*x - 1);
}
double F1__1(double x) {
	return (-x);
}

void metod1() {
	double a, b, h, x, s = 0;
	double n = 200;

	cout << "Введите приделы интегрирования ";
	cin >> a >> b;

	h = (b - a) / n;
	x = a + h;

	do
	{
		s += h * (F(x) + F(x + h)) / 2;
		x += h;

	} while (x <= (b - h));
	cout << s << endl;
}

void metod2() {
	float a, b, h, x = 0, s1 = 0, s2 = 0, z;
	float n = 200;

	cout << "Введите приделы интегрирования ";
	cin >> a >> b;

	h = (b - a) / (2 * n);
	x = a + 2 * h;
	int i = 0;

	while (i < n)
	{
		s1 = s1 + F(x);
		x += h;
		s2 = s2 + F(x);
		x += h;
		i++;
	}

	z = h / 3 * (F(a) + 4 * F(a + h) + 4 * s1 + 2 * s2 + F(b));

	cout << z;
}

void metod3() {
	float a, b, e, x, x1;
	cout << "Введите а, b, e \n";
	cin >> a >> b >> e;
	x1 = a;
	if (F1(a) * F1__1(a))
	{
		x1 = a;
	}
	else if (F1(b) * F1__1(b)) {
		x1 = b;
	}
	x = x1;
	x1 = x - (F1(x) / F1_1(x));
	if (abs(x1 - x) > e) {

	}
	else {
		printf("%.4f", x);
	}
}

void metod4() {
	float a, b, e, x;
	cout << "Введите а, b, e \n";
	cin >> a >> b >> e;

	x = (a + b) / 2;
	if (F1(x) * F1(a) <= 0)
	{
		b = x;
	}
	else {
		a = x;
	}
	while (abs(a - b) > 2 * e)
	{
		x = (a + b) / 2;
		printf("%.4f", x);
	}
	printf("%.4f", x);
}

int main()
{
	setlocale(LC_ALL, "Rus");
	metod1();
	metod2();
	metod3();
	metod4();
	return 0;
}