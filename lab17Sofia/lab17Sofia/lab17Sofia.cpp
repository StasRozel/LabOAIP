#include <iostream>
using namespace std;
void task1(int size) {
    
    cout << "Введите количество элементов";
    cin >> size;
    int* arr = new int[size];
    srand((unsigned)time(NULL));
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 30 - 15;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
}

void task2(int(**matrix), int N) {
    cout << "Введите порядок квадратной матрицы ";
    cin >> N;
    srand((unsigned)time(NULL));
    matrix = new int* [N];
    for (int i = 0; i < N; i++)
        matrix[i] = new int[N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
        {
            *(*(matrix + i) + j) = 1 + rand() % 15 - 5;
        }
    } 
        
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << *(*(matrix + i) + j) << '\t';
        }
        cout << endl;
        cout << endl;
    }
    
    for (int i = 0; i < N; i++) {
        int j;
        for (j = 0; j < N; j++)
            if (matrix[i][j] < 0) break;
        if (j < N) continue;
        int sum = 0;
        for (j = 0; j < N; j++) sum += matrix[i][j];
        cout << "Строка " << i + 1 << " Сумма " << sum << endl;
    }
   
}
 
int main()
{
    int** matrix{}, N = 0, size{};
    setlocale(LC_ALL, "Rus");
    task1(size);
    task2(matrix, N);
}


