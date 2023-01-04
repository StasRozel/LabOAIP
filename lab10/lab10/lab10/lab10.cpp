#include <bitset>
#include <iostream>
using namespace std;

//void task1() {
//	char tmp[33];
//	int A, maskA;
//	cout << "A=";
//	cin >> A;
//
//	_itoa_s(A, tmp, 2);
//	cout << tmp << endl;
//	int i = 0;
//	while (true)
//	{
//		if (tmp[i] == '1')
//		{
//			
//			if (i % 3 == 0) {
//				tmp[i] = '1';
//			}
//			i++;
//			
//		}
//		else {
//			break;
//		}
//	}
//	/*for (int k = i - 3; k > 0; k -= 3)
//	{
//		tmp[k] = '0';
//	}*/
//	cout << tmp << endl;
//}
void task1() {
	char tmp[33];
	int A, maskA;
	cout << "A=";
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << tmp << endl;
	int i = 0, k = 0;
	while (true)
	{
		if (tmp[i] == '0' || tmp[i] == '1')
		{

			if (tmp[i] == '1' && i != 0)
			{
				k++;
			}
			if (k % 3 == 0)
				tmp[i] = '0';
			i++;
		}
		else {
			break;
		}
	}
	
	cout << tmp << endl;
}

void task2() {
	char tmp[33];
	int A, B, n, m;
	cout << "Число А= ", cin >> A;
	cout << "Число В= ", cin >> B;
	cout << "Введите позицию с которой должены браться биты: ", cin >> n;
	cout << "Введите позицию в которую должены добавляться биты: ", cin >> m;
	int maskA = 7 * pow(2, n); // для смещения маски 7 - 111 в двоичной с/с, 7 * 2^n, 2^n количество нулей после 111, чтобы сдвинуть маску 
	int maskAB = 7 * pow(2, m); // все тоже самое что и сверху, но для маски B
	int maskB = ~maskAB; // сама маска  В с перевернутыми значениями 
	_itoa_s(A, tmp, 2); 
	cout << "A= " << tmp << endl;
	_itoa_s(B, tmp, 2); 
	cout << "B= " << tmp << endl;
	_itoa_s((A & maskA) >> n, tmp, 2);
	cout << "Выделенные биты А: " << tmp << endl;
	
	_itoa_s(((B & maskB) | ((A & maskA) >> n) << m), tmp, 2);
	cout << "Результат B= " << tmp << endl;
}

void task3() {
	char tmp[33];
	int A, B, n = 3, m = 2;
	cout << "Число А= ", cin >> A;
	cout << "Число В= ", cin >> B;
	int maskA = 31 * pow(2, n); // для смещения маски 31 - 11111 в двоичной с/с, 31 * 2^n, 2^n количество нулей после 111, чтобы сдвинуть маску 
	int maskAB = 31 * pow(2, m); // все тоже самое что и сверху, но для маски B
	int maskB = ~maskAB; // сама маска  В с перевернутыми значениями 
	_itoa_s(A, tmp, 2); cout << "A=" << tmp << endl;
	_itoa_s(B, tmp, 2); cout << "B=" << tmp << endl;
	_itoa_s((A & maskA) >> n, tmp, 2);
	cout << "Выделенные биты А: " << tmp << endl;
	_itoa_s(((B & maskB) | ((A & maskA) >> n) << m), tmp, 2);
	cout << " Результат B=" << tmp << endl;
}

void task4() {
	char tmp[33];
	int A, n, m, p, num;
	cout << "Число А = ", cin >> A;
	cout << "Введите количество битов, которое нужно установить в ноль ", cin >> n;
	cout << "Введите номер позиции с которой они должены стоять ", cin >> m;
	p = (m - n) + 1;
	int maskA = pow(2, n) - 1; 
	int maskAB = maskA * pow(2, p); // все тоже самое что и сверху, но для маски B
	int maskB = ~maskAB; // сама маска  В с перевернутыми значениями 
	
	_itoa_s(((A & maskB) | (maskA >> n) ), tmp, 2);
	cout << " Результат B=" << tmp << endl;
	 
}


int main() {
	setlocale(LC_ALL, "Rus");

	//task1();
	//task2();
	task3();
	task4();
	
	return 0;
}


