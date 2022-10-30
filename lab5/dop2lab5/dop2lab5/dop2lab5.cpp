#include <iostream>

using namespace std;
//nomer2
int main()
{
	setlocale(LC_ALL, "Rus");
	int day = 1;
	float P, Q, prz = 0;
	cout << "Введите доход за первый день ";
	cin >> P;
	cout << "Введите значение, которое должны превысить ";
	cin >> Q;
	while (P < Q)
	{
		P *= 1.03;
		day++;
		
		cout << P << endl;
	}
	cout << "Выручка: " << P << "тыс. руб" << endl;
	cout << "Процент: " << prz << "%" << endl;
	cout << "Дней заняло: " << day;
}

