
#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Rus");
    int i, a, b, n, k;
    cout << "Введите количество чисел:";
    cin >> n;
    for (i = 1; i <= n - 1; i++)
        if (i == 1) {
            cout << "Введите " << i << " число:";
            cin >> a; cout << "Введите " << i + 1 << " число:";
            cin >> b;
            if (a * b < 0) k++;
        }
        else {
            a = b;
            cout << "Введите " << i + 1 << " число:";
            cin >> b; if (a * b < 0) k++;
        }
    cout << endl << "Ответ:" << k;
}