#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <conio.h>
#include <windows.h>

using namespace std;

void task1() {
	int t;
	cout << "Введите t=";
	cin >> t;
	cout << "t= " << t << endl;
	cout << setbase(t) << endl;
	cout << "Тип Размер в байтах" << endl;
	cout << "int: " << sizeof(int) << endl;
	cout << "char: " << sizeof(char) << endl;
	cout << "float: " << sizeof(float) << endl;
	cout << "double: " << sizeof(double) << endl;
}

void task2() {

	char c, probel = ' ';
	cout << "Введите символ ";
	cin >> c;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c << endl;
	cout << setw(34) << setfill(probel) << probel;
	cout << setw(12) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(14) << setfill(c) << c << endl;

}

void task3() {
	printf("\n\t Privet\n");
	printf("\n... Press key");
	cout << endl;
	_getch();
}

void task5() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	char name[60];
	puts("Как вас зовут? ");
	gets_s(name);
	printf("Привет, %s\n", name);
}

void setPartBody1(char prob, char a) {

	cout << setw(35) << setfill(prob) << prob;
	cout << setw(2) << setfill(a) << a;
		cout << setw(2) << setfill(prob) << prob;
		cout << setw(2) << setfill(a) << a;
	cout << setw(2) << setfill(prob) << prob;
	cout << setw(2) << setfill(a) << a;
	cout << setw(2) << setfill(prob) << prob << endl;

}

void setPartBody2(char prob, char a) {
	cout << setw(37) << setfill(prob) << prob;
	cout << setw(2) << setfill(a) << a;
	cout << setw(2) << setfill(prob) << prob;
	cout << setw(2) << setfill(a) << a << endl;
}

void variant8() {

	char a, prob = ' ';
	cout << "Введите символ ";
	cin >> a;
	cout << setw(36) << setfill(prob) << prob;
	cout << setw(8) << setfill(a) << a << endl;
	cout << setw(35) << setfill(prob) << prob;
	cout << setw(10) << setfill(a) << a << endl;
	for (int i = 1; i <= 3; i++) {
		cout << setw(34) << setfill(prob) << prob;
		cout << setw(12) << setfill(a) << a << endl;
	}
	cout << setw(35) << setfill(prob) << prob;
	cout << setw(10) << setfill(a) << a << endl;
	cout << setw(36) << setfill(prob) << prob;
	cout << setw(8) << setfill(a) << a << endl;
	cout << setw(39) << setfill(prob) << prob;
	cout << setw(2) << setfill(a) << a << endl;
	cout << setw(36) << setfill(prob) << prob;
	cout << setw(8) << setfill(a) << a << endl;
	for (int i = 1; i <= 4; i++) {
		setPartBody1(prob, a);
	}
	for (int i = 1; i <= 2; i++) {
		cout << setw(39) << setfill(prob) << prob;
		cout << setw(2) << setfill(a) << a << endl;
	}
	cout << setw(38) << setfill(prob) << prob;
	cout << setw(4) << setfill(a) << a << endl;
	for (int i = 1; i <= 5; i++) {
		setPartBody2(prob, a);
	}
}

void variant8_1() {
	double a, b, c, p, S;
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;
	cout << "c= ";
	cin >> c,

	p = (a + b + c) / 2;

	S = sqrt(p * (p - a) * (p - b) * (p - c));

	cout << "S=" << S << endl;
}

void var9() {
	char s, prob = ' ';
	cout << "Введите символ ";
	cin >> s;
	for (int i = 1; i <= 2; i++) {
		cout << setw(29) << setfill(prob) << prob;
		cout << setw(1) << setfill(s) << s << endl;
		cout << setw(28) << setfill(prob) << prob;
		cout << setw(3) << setfill(s) << s << endl;
		cout << setw(27) << setfill(prob) << prob;
		cout << setw(5) << setfill(s) << s << endl;
	}
	cout << setw(29) << setfill(prob) << prob;
	cout << setw(1) << setfill(s) << s << endl;
	cout << setw(29) << setfill(prob) << prob;
	cout << setw(1) << setfill(s) << s << endl;
	int a, b, h, S, n = 4;
	cout << "Введите число a: " << endl;
	cin >> a;
	cout << "Введите число b: " << endl;
	cin >> b;
	h = b * n;
	S = (a + h) * 2;
	cout << "Площадь прямоугольника " << S << endl;
}

void var11() {
	char s, prob = ' ';
	cout << "Введите символ ";
	cin >> s;
	for (int i = 1; i <= 6; i++) {
		cout << setw(33) << setfill(prob) << prob;
		cout << setw(14) << setfill(s) << s << endl;
	}

	double  a, d, S;
	cout << "Введите число ";
	cin >> d;
	S = pow(d, 2) / 2;

	cout << "Площадь квадрата " << S << endl;
}

void var16() {
	char s, prob = ' ';
	cout << "Введите символ ";
	cin >> s;
	cout << setw(35) << setfill(prob) << prob;
	cout << setw(10) << setfill(s) << s << endl;
	cout << setw(34) << setfill(prob) << prob;
	cout << setw(12) << setfill(s) << s << endl;
	cout << setw(33) << setfill(prob) << prob;
	cout << setw(14) << setfill(s) << s << endl;
	cout << setw(38) << setfill(prob) << prob;
	cout << setw(4) << setfill(s) << s << endl;
	cout << setw(37) << setfill(prob) << prob;
	cout << setw(6) << setfill(s) << s << endl;
	cout << setw(36) << setfill(prob) << prob;
	cout << setw(8) << setfill(s) << s << endl;
	cout << setw(37) << setfill(prob) << prob;
	cout << setw(6) << setfill(s) << s << endl;

	int a, b, c, S;

	cout << "Введите число a: ";
	cin >> a;
	cout << "Введите число b: ";
	cin >> b;
	cout << "Введите число c: ";
	cin >> c;

	S = (a * 50) + (b * 100) + (c * 200);

	cout << "Счёт: " << S;
}

int main()
{
	setlocale(LC_CTYPE, "Russian");
	cout << "Задание 1\n";
	task1();
	cout << "Задание 2\n";
	task2();
	cout << "Задание 3\n";
	task3();
	cout << "Задание 5\n";
	task5();
	cout << "Вариант 8\n";
	variant8();

	variant8_1();
	cout << "Доп. задание 1\n";
	var9();
	cout << "Доп. задание 2\n";
	var11();
	cout << "Доп. задание 3\n";
	var16();
}