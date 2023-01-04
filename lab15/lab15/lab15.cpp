#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int funPosNegNum(int(**matrix), int M, int N,  int &countNegNum, int &countPosNum, int &countNull) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++)
        {
            if (matrix[i][j] < 0) {
                countNegNum++;
            }
            else if (matrix[i][j] > 0) {
                countPosNum++;
            }
            else if (matrix[i][j] == 0) {
                countNull++;
            }
        }
    }
    return 0;
}

void task1(int(**matrix), int M, int N) {
    int countNegNum = 0, countPosNum = 0, countNull = 0;
    int i, j;
  
    matrix = new int* [M];
    for (i = 0; i < M; i++)
        matrix[i] = new int[N];
    srand((unsigned)time(NULL));
    for (i = 0; i < M; i++) 
        for (j = 0; j < N; j++)
        {
            /*cout << "Inter element " << "[" << i << "][" << j << "]  ";
            cin >> matrix[i][j];*/
            matrix[i][j] = 1 + rand() % 20 - 10;
        }

    cout << endl;
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++)
        {
            cout << matrix[i][j] << '\t';
        }
        cout << endl;
        cout << endl;
    }
    cout << endl;
    funPosNegNum(matrix, M, N, countNegNum, countPosNum, countNull);
    cout << "Кол-во положительных чисел " << countPosNum << endl;
    cout << "Кол-во отрицательных чисел " << countNegNum << endl;
    cout << "Кол-во нулей " << countNull << endl;
    cout << endl;

    for (i = 0; i < N; i++)
        delete matrix[i];
    delete[] matrix;
}

void task2(string strA) {
    int size = 0, count = 0;
    
    for (int i = 0; strA[i] != 0; i++)
    {
        if (strA[i] == ' ' && strA[i-1] != ' ') {
            count++;
        }
    }
    printf_s("Количество слов в строке %d", count + 1 );

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