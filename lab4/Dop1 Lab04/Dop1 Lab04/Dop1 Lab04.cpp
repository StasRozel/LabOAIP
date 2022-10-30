#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	char sumb;
	int a, b;
	double c;
	printf("Какую операцию хотете совершить?(+, -, *, /, %) ");
	cin >> sumb;
	switch (sumb)
	{
	case '+': 
		cout << "Введите а: ";
		cin >> a;
		cout << "Введите b: ";
		cin >> b;
		cout << a + b;
			break;
	case '-':
		cout << "Введите а: ";
		cin >> a;
		cout << "Введите b: ";
		cin >> b;
		cout << a - b;
		break;
	case '*':
		cout << "Введите а: ";
		cin >> a;
		cout << "Введите b: ";
		cin >> b;
		cout << a * b;
		break;
	case '/':
		cout << "Введите а: ";
		cin >> a;
		cout << "Введите b: ";
		cin >> b;
		c = a / b;
		cout << c;
		break;
	case '%':
		cout << "Введите а: ";
		cin >> a;
		cout << "Введите b: ";
		cin >> b;
		c = a% b;
		cout << c;
		break;
	default:
		cout << "Введенно не верное значение";
		break;
	}
}

