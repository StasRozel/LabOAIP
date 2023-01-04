#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	char tmp[33];
	int A, n, p, maskA=0;
	cout << "A=";
	cin >> A;
	cout << "n=";
	cin >> n;
	cout << "p=";
	cin >> p;
	_itoa_s(A, tmp, 2);
	cout << tmp << endl;
	int i = 0;
	while (true)
	{
		if (tmp[i] == '0' || tmp[i] == '1')
		{
			i++;
		}
		else {
			break;
		}
	}
	for (int k = 0; k <= n; k++)
	{
		maskA =maskA+pow(2, k) - 1 ;
	}
	_itoa_s((maskA<<(i-p-n))|A, tmp, 2);
	cout << tmp << endl;

}