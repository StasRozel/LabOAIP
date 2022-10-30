#include<iostream>
#include <string>
using namespace std;
double func(double x)
{
	return pow(x, 3) - 1;
}
double fx(double x) {
	return(pow(x, 3) + x - 2);
}
double fun(double x)
{
	return pow(x, 3) - 1;
}
double diff(double x)
{
	const double h = 1e-10;
	return ((fun(x + h) - fun(x - h)) / (2.0 * h));
}
double diff2(double x) {
	const double h = 1e-10;
	return ((diff(x + h) - diff(x - h)) / (2.0 * h));
}



int main() {
	
	setlocale(LC_ALL, "rus");
	//____________________________________________
	// Метод пораболы

	double a = 0, b = 3, n = 200, h, s1, s2, i, x, z;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	s1 = 0;
	s2 = 0;
	i = 1;

	for (int i = 1; i < n; i++) {
		s2 += func(x);
		x += h;
		s1 += func(x);
		x += h;
	}
	z = h / 3 * (func(a) + 4 * func(a + h) + 4 * s1 + 2 * s2 + func(b));
	cout << "integral(метод пораболы) = " << z << endl;
	//____________________________________________
	// Метод трапеции

	double s;
	setlocale(0, "");
	h = (b - a) / n;
	x = a;
	s = 0;
	for (int i = 0; i < n; i++)
	{
		s = s + 0.5 * (fun(x) + fun(x + h)) * h;
		x = x + h;
	}
	cout << "integral(метод трапеции) = " << s << endl;
	//____________________________________________
	// Метод касательных

	double e = 0.0001, x1;
	a = 0;
	b = 0;
	if (diff2(x) * fx(x) > 0) {
		a = x;
	}
	else
	{
		b = x;
	}
	x1 = x;
	x1 = x - (fx(x) / diff(x));
	if (abs(x1 - x) > e) {
		cout << "x = " << x << endl;
	}
	else {
		cout << "x = " << x << endl;
	}
	//____________________________________________
	//Метод дихотомии
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	for (int i = 0; i <= 50; i + e) {
		if (fx(x) * fx(a) <= 0) {
			b = x;
		}
		else
		{
			a = x;
		}
		if (abs(a - b) > 2 * e) {
			cout << "x(метод дихотомии) = " << x << endl;
			break;
		}
		else
		{
			x /= 2;
		}
	}
}