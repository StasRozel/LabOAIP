#include<iostream>
#include <string>
using namespace std;
double func(double x)
{
	return 5 - pow(x, 2);
}
double fx(double x) {
	return 2- pow(x, 2) + x;
}

double diff(double x)
{
	const double h = 1e-10;
	return ((fx(x + h) - fx(x - h)) / (2.0 * h));
}
double diff2(double x) {
	const double h = 1e-10;
	return ((diff(x + h) - diff(x - h)) / (2.0 * h));
}



int main() {

	setlocale(LC_ALL, "rus");
	//____________________________________________
	// Метод пораболы

	double a = 1, b = 6, n = 200, h, s1, s2, i, x, z;
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
		s = s + 0.5 * (func(x) + func(x + h)) * h;
		x = x + h;
	}
	cout << "integral(метод трапеции) = " << s << endl;
	//____________________________________________
	// Метод касательных

	cout << "Метод касательных\n";
	double x1, e = 0.00001;
	cout << "a="; cin >> a;
	cout << "b="; cin >> b;
	if (fx(a) * diff2(a) > 0) x1 = a;
	else x1 = b;
	do {
		x1 = x1 - fx(x1) / diff(x1);
	} while (fabs(fx(x1)) >= e);
	cout << "x= " << x1 << "\n";

	/*Метод дихотомии*/
	//____________________________________________
	cout << "Метод дихотомии\n";
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	x = (a + b) / 2;
	while ((fabs(b - a)) > e)
	{
		if (fx(a) * fx(x) < 0)
			b = x;
		else
			a = x;
		x = (a + b) / 2;
	}
	cout << "x= " << x << endl;

}