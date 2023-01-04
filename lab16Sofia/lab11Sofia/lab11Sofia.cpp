#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

void task1(int(**matrix), int M, int N) {
    matrix = new int* [M];
    for (int i = 0; i < M; i++)
        matrix[i] = new int[N];
    srand((unsigned)time(NULL));
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
        {
            matrix[i][j] = 1 + rand() % 20 - 10;
        }

    cout << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++)
        {
            cout << matrix[i][j] << '\t';
        }
        cout << endl;
        cout << endl;

    }
    int max = matrix[0][0];
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++)
        {
            if (max < matrix[i][j]) {
                max = matrix[i][j];
            }
        }
    }
    cout << "Максимальный элемент: " << max << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++)
        {
            if (max == matrix[i][j]) {
                cout << "Строка: " << i + 1 << " " << "Столбец: " << j + 1 << endl;
            }
        }
    }
    int sum = 0;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++)
        {
            if (i > j) {
                sum += matrix[i][j];
                continue;
            }

        }
    }
    cout <<"Сумма элементов под главной диагональю: " << sum << endl;
}

void task2(string strA) {
    for (int i = 0; strA[i] != 0; i++)
    {
        if (strA[i] == 'c') {
            strA.insert(i + 1, "*");
        }
    }
    cout << strA;
}
    int main()
    {
        setlocale(LC_ALL, "Rus");
        int size = 0, count = 0, M, N, ** matrix{}, variant;
        string strA;
        bool state = ios::sync_with_stdio(false);
        cout << "Какое задание вам нужно? " << endl;
        cin >> variant;
        switch (variant)
        {
        case 1:
            cout << "Введите количество стоблцов матрицы ";
            cin >> N;
            cout << "Введите количество строк матрицы ";
            cin >> M;
            task1(matrix, M, N);

            break;
        case 2:
            cout << "Введите предложение: \n";
            cin.ignore(cin.rdbuf()->in_avail());
            getline(cin, strA);
            ios::sync_with_stdio(state);
            task2(strA);

            break;
        default:
            cout << "Вы выбрали не правильный вариант\n";
            break;
        }
        return 0;
    }
