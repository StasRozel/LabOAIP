#include <iostream>
using namespace std;

int main()
{   
    setlocale(LC_ALL, "Rus");

    int a, b, c, r, s, t;
    cout << "Введите a: ";
    cin >> a ;
    cout << "Введите b: ";
    cin >> b;
    cout << "Введите c: ";
    cin >> c;
    cout << "Введите r: ";
    cin >> r;
    cout << "Введите s: ";
    cin >> s;
    cout << "Введите t: ";
    cin >> t;

    if (a >= r && b >= s && c >= t) {
        cout << "Подходит";
    }
    else {
        cout << "Не подходит";
    }
}

