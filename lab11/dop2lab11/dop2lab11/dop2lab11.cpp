#include <iostream>
using namespace std;
//5
int main()
{
    setlocale(LC_ALL, "rus");
    
    const int maxSize = 99;
    int n, i, a[maxSize], b[maxSize], m, kmax = 0;
    cout << "Введите размер массива (не более 99)" << endl;
    cin >> n;
    if (n > 99) return 0;
        
    cout << "Массив А: ";
    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 29;
        cout << a[i] << " ";
    }
    
    cout << "\nВведите размер массива (не более 99)" << endl;
    cin >> m;
    cout << "Массив В: ";
    for (i = 0; i < m; i++)
    {
        b[i] = rand() % 99;
        cout << b[i] << " ";
    }

    for (i = 1; i < n; i++)
        if (a[i] > a[kmax])
            kmax = i;
    cout << "\nМаксимальный элемент в массиве А " << a[kmax] << endl;

    bool u = true;
    int k = 0;
    for (int i = 0; i < m; i++)
    {
        if (b[i] == a[kmax]) {
            u = false;
            k++;
            cout << "Содержится " << k << " раз\n";
        }
    }
    if (u) {
        cout << "Не содержится";
    }
    return 0;
}

