#include <iostream>

using namespace std;
//nomer1
int main() 
{
	setlocale(LC_ALL, "Rus");
	int a, i = 0, num, sum = 0, x, y = 0;
	for ( a = 100000; a <= 999999; a++) {
		int b = a;
		while (i < 6) {
			num = a % 10;
			a /= 10;
			sum += num;
			i++;
		}
		a = b;
		if (sum % 7 == 0) {
			y++;
		}
		else {
			y = 0;
		}
		if (y == 2) {
			cout << a - 1 << endl << a << endl;
		}
		sum = 0;
		i = 0;
	}
}	