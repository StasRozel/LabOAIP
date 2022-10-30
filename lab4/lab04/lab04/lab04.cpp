#include <iostream>
using namespace std;

void task1()
{
    cout << "Задание 1";
    setlocale(LC_CTYPE, "Russian");
    float b, z, x = 4e-3, s = 1.1, j;
    printf_s("Введите j ");
    scanf_s("%f", &j);
    b = s + (5 * x + j);
    if (b < 1.5)
        z = sqrt(x + 0.3 * j) + b;
    else
        z = abs(x * j + b);
    printf("j=%f\t", j);
    printf("z=%f\n", z);
}

void task2()
{
    cout << "Задание 2";
    setlocale(LC_CTYPE, "Russian");
    float x, y, z, mn, mx;
    printf("Введите x "); scanf_s("%f", &x);
    printf("Введите y "); scanf_s("%f", &y);
    printf("Введите z "); scanf_s("%f", &z);
    if ((x + y + z) < (x * y * z))
        mx = (x * y * z);
    else
        mx = (x + y + z);
    mn = x;
    if (mn > y) mn = y;
    if (mn > z) mn = z;
    printf("max(x + y + z, xyz) * min(x, y, z) = %f \n", mn * mx);
}

void task3()
{
    cout << "Задание 3";
    setlocale(LC_CTYPE, "Russian");
    int k;
    puts("Вы хотите купить автомобиль? (1-да, 2-нет)");
    std::cin >> k;
    switch (k)
    {
    case 1: { puts("Какой? (1- Майбах, 2-Тойота, 3-Лада)");
        std::cin >> k;
        switch (k)
        {
        case 1: puts("Не слабо"); break;
        case 2: puts("Хороший выбор"); break;
        case 3: puts("Сомнительный выбор");
            break;
        }
        break;
    }
    case 2: puts("Полезно ходить пешком"); break;
    default: puts("Некорректный вариант"); break;
    }
}

void task4() {
    cout << "Задание 4";
    int a, b, c, buf;
    cout << "Введите a, b, c ";
    cin >> a >> b >> c;
    if (a < c) {
        buf = c;
        c = a;
        a = buf;
    }
  
    if (a < b) {
        buf = b;
        b = a;
        a = buf;
    }
        
    if (b < c) {
        buf = b;
        b = c;
        c = buf;
    }

    cout << "В обрядком порядке: " << a << b << c << endl;
}

void task5() {
    cout << "Задание 5";
    int a; //само число.
    int a1; // тысячный разряд.
    int a2; // сотый разряд.
    int a3; // десятки.
    int a4; // единицы.
    cout << "Введите четырехзначное число" << endl;
    cin >> a;
    a1 = a / 1000;
    a2 = (a / 100) % 10;
    a3 = (a / 10) % 10;
    a4 = a % 10;
    if (a1 == a2 || a1 == a3 || a1 == a4 || a2 == a3 || a2 == a4 || a3 == a4) {
        cout << "В заданном числе есть равные цифры.\n";
    }
    else {
        cout << "Все цифры заданного числа различны.\n";
    }
}

void task6() {
    cout << "Задание 6";
    int k;
    puts("Вы хотите купить ноутбук? (1 - Да, 2 - Нет)");
    std::cin >> k;
    switch (k)
    {
    case 1: { puts("Какой? (1 - ASUS, 2 - Dell, 3 - Aser)");
        std::cin >> k;
        switch (k)
        {
        case 1: puts("Не слабо"); break;
        case 2: puts("Хороший выбор"); break;
        case 3: puts("Сомнительный выбор");
            break;
        }
        break;
    }
    case 2: puts("Праильно, зрение не угробите"); break;
    default: puts("Некорректный вариант"); break;
    }
}

int main() {

    setlocale(LC_ALL, "Russian"); 

    task1();

    task2();

    task3();

    task4();

    task5();

    task6();

    return 0;
}
