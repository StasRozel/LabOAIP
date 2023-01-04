#include <iostream>
#include "Header.h"
using namespace std;

void dop1() {
	int n;
	cout << "¬ведите размер квадратной матрицы ", cin >> n;
	int A[10][10]{}, A1[100]{};
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)//заполнение массива с заданным свойством
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand() % 20 - 10;
			
		}
	}
	cout << "Ќачальна€ матрица \n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) {
			cout << A[i][j] << '\t';

		}
		cout << endl;
		cout << endl;
	}
	int buf, arf = n / 2;
	for (int i = 0; i < arf ; i++)
	{
		for (int j = 0; j < arf; j++) {
			buf = A[i][j];
			A[i][j] = A[i + arf][j + arf];
			A[i + arf][j + arf] = buf;
		}
	}
	for (int i = arf; i < n; i++)
	{
		for (int j = 0; j < arf; j++) {
			buf = A[i][j];
			A[i][j] = A[i - arf][j + arf];
			A[i - arf][j + arf] = buf;
		}
	}
	cout << "Ќова€ матрица\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) {
			cout << A[i][j] << '\t';

		}
		cout << endl;
		cout << endl;
	}
}

void dop2()
{
	int n;
	cout << "¬ведите размер квадратной матрицы ",cin >> n;
	int sq[10][10];
	for (int i = 0; i < n; i++)//заполнение массива с заданным свойством
	{
		int a = i + 1;
		for (int j = 0; j < n; j++)
		{
			sq[i][j] = a;
			a++;
			if (a > n) a = 1;
		}
	}
	for (int i = 0; i < n; i++)//вывод
	{
		for (int j = 0; j < n; j++)
			cout << sq[i][j] << ' ';
		cout << endl;
	}
}


//int funMaxElemArr(int n, int max, int(*matrix)[10]) {
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (matrix[i][j] == max)
//			{
//				max = matrix[i][j];
//				
//			}
//		}
//	}
//	return max;
//}

void dop3() {
	int n, count = 0;
	cout << "¬ведите размер квадратной матрицы ", cin >> n;
	int size = n * n;
	int A[10][10], A1[100];
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)//заполнение массива с заданным свойством
	{
		//int A2 = rand() % 40 - 20;
		for (int j = 0; j < n; j++)
		{
			//A[i][j] = (double)A2 / 20;
			A[i][j] = rand() % 40 - 20;
			A1[count] = A[i][j];
			count++;
			cout << A[i][j] << '\t';
		}
		cout << endl;
		cout << endl;
	}
	int temp; // временна€ переменна€ дл€ обмена элементов местами
	// —ортировка массива пузырьком
	for (int i = 0; i < (n * n) - 1; i++) {
		for (int j = 0; j < (n * n) - i - 1; j++) {
			if (A1[j] < A1[j + 1]) {
				// мен€ем элементы местами
				temp = A1[j];
				A1[j] = A1[j + 1];
				A1[j + 1] = temp;
			}
		}
	}
	cout << "Matrix1 \n";
	for (int m = 0; m < size; m++) { // 
		//cout << A1[m] << " ";
		for (int i = m + 1; i < size; i++) {
			if (A1[m] == A1[i]) {
				for (int k = i; k <= size - 1; k++) {
					A1[k] = A1[k + 1];
				}
				size--;

			}
		}
	}
	for (int m = 0; m < size; m++) { // 
		//cout << A1[m] << " ";
		for (int i = m + 1; i < size; i++) {
			if (A1[m] == A1[i]) {
				for (int k = i; k <= size - 1; k++) {
					A1[k] = A1[k + 1];
				}
				size--;

			}
		}
	}
	
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		int count = 0;
		for (int j = 0; j < n; j++)
		{
			
			if (count < n) {
				A[i][i] = A1[count];
			}
			count++;
			cout << A[i][j] << '\t';
		}
		cout << endl;
		cout << endl;
	}
	
}