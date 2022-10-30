#include <iostream>

using std::cout;
using std::endl;

//Варианты 12 и 15
void dop1() {
	cout << "Доп. задание 1\n";
	double u, t, k = 6, r = 5 * pow(10, -7), x = 0.095;
	t = tan(x) + r * (1 - log(x));
	u = t / (pow(x, 3)) / (1 - exp(k - 4));
	cout << "t=" << t << endl;
	cout << "u=" << u << endl;

	double y, r_1, a = 1.75, b = 4.5 * pow(10, -4);
	y = a * exp(-2 * b) - sqrt(1 + a);
	r_1 = log(1 + 20 * b) / (1 + a);
	cout << "y=" << y << endl;
	cout << "r_1=" << r_1 << endl;
}
//Варианты 7 и 10
void dop2() {
	cout << "Доп. задание 2\n";
	double y, w, x = 1.4, m = 6, z = 0.05 * pow(10, -5);
	y = sqrt(1 + x) + cos(2/m);
	w = 0.6 * z - 2 * exp(-2*y*m);
	cout << "y=" << y << endl;
	cout << "w=" << w << endl;

	double y_1, s, z_1 = 1.7, a = 4 * pow(10, -8), m_1 = 3, n = 3;
	y_1 = (z + log(z)) / (exp(-3) + sqrt(a));
	s = (1 + m_1 * n) / log(1 + z);
	cout << "y_1=" << y_1 << endl;
	cout << "s=" << s << endl;
}
//Варианты 13 и 16
void dop3() {
	cout << "Доп. задание 3\n";
	double y, t, d = 0.5* pow(10, -8), c = -9, j = -4, a=1.5;
	t = (d * c + a * sqrt(c - 1));
	y = 0.5 * t / d + exp(a);

	double y_1, w, m = 6, z = 0.05 * pow(10, -5);
	y_1 = cos(5 * m) / pow(sin(0.4 * m), 2);
	w = 4 * z * y - 7 * exp(-2 * y_1);
	cout << y_1;
}

void lab3() {
	using namespace std;
	double s, t_1, x_1, j, y_1;
	cout << "Введите число ";
	cin >> x_1;
	cout << "Введите число ";
	cin >> j;
	cout << "Введите число ";
	cin >> y_1;
	s = 0.4 * x_1 - 1 / j * tan(y_1);
	t_1 = s - sin(s);
	cout << "s=" << s << endl;
	cout << "t_1=" << t_1 << endl;

	cout << "Задание 6\n";
	double w, d, a_1, x_2 , z;
	cout << "Введите число ";
	cin >> a_1;
	cout << "Введите число ";
	cin >> x_2;
	cout << "Введите число ";
	cin >> z;
	w = tan(1) * (1 + x_2) + z - exp(a_1);
	d = 9 * sqrt(2 - 3 * x_2) + abs(a_1 + 1);
	cout << "w=" << w << endl << "d=" << d << endl;
}

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "Задание 3\n";
	float x = 3, y;
	y = x * x + sin(x);
	cout << y << std::endl;

	cout << "Задание 4\n";
	double t, u, k = 4, a = 4.1, x__1 = 5e-5;
	t = 2 * tan(k) / a * log(abs(3 + x__1)) + exp(x__1);
	u = sqrt(t + 1) * (sin(x__1) * cos(t));
	cout << "t=" << t << endl;
	cout << "u=" << u << endl;
	//Варианты 8 и 11
	cout << "Задание 5\n";
	double s, t_1, x_1 = 0.1, j = 12, y_1 = 5 * pow(10, 6);
	s = 0.4 * x_1 - 1 / j * tan(y_1);
	t_1 = s - sin(s);
	cout << "s=" << s << endl;
	cout << "t_1=" << t_1 << endl;

	cout << "Задание 6\n";
	double w, d, a_1 = 1.5, x_2 = -1.8, z = 15 * pow(10, -9);
	w = tan(1) * (1 + x_2) + z - exp(a_1);
	d = 9 * sqrt(2 - 3 * x_2) + abs(a_1 + 1);
	cout << "w=" << w << endl << "d=" << d << endl;

	dop1();
	dop2();
	dop3();

}
