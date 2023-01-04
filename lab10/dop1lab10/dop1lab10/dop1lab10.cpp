
#include <iostream>
using namespace std;
//4.2
void task1()
{
    setlocale(LC_CTYPE, "Russian");
    int A, p, n, razn;
    char tmp[33];
    cout << "Введите A" << endl;
    cin >> A;
    _itoa_s(A, tmp, 2);
    cout << tmp << endl;
    cout << "Введите начальную позицию" << endl;
    cin >> p;
    cout << "Введите число битов" << endl;
    cin >> n;
    razn = p + n;
    while (p <= razn)
    {
        A |= 1 << p;
        _itoa_s(A, tmp, 2);
        p++;
    }

    cout << tmp << endl;
}

//4.1
int main()
{
  setlocale(LC_CTYPE, "Russian");
  int A, i; char tmp[33];
  cout << "Введите число ";
  cin >> A;
  _itoa_s(A, tmp, 2);
  cout << "Число в двоичном виде = " << tmp << endl;
  if ((A & 3) == 0)
    cout << "Число кратно 4" << endl;
  else
    cout << "Число не кратно 4" << endl;

  task1();
 
}
