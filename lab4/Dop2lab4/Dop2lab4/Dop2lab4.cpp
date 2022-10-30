#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, p, q, r, s;
	cout << "Введите а: ";
	cin >> a;
	cout << "Введите b: ";
	cin >> b;
	cout << "Введите p: ";
	cin >> p;
	cout << "Введите q: ";
	cin >> q;
	cout << "Введите r: ";
	cin >> r;
	cout << "Введите s: ";
	cin >> s;

	if (a >= p && a  >= r  && b >= q && b >= r) {
		cout << "Подходит";
	}
	else {
		cout << "Не подходит";
	}
}


