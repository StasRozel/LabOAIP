#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

void task1() {
	int columns, rows, A[10][10], B[10][10],
 a1 = 0, a2 = 0, a3 = 0;
	cout << "Введите количество столбцов: ", cin >> columns;
	cout << "Введите количество строк: ", cin >> rows;

	srand((unsigned)time(NULL));

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++) {
			A[i][j] = rand() % 99;
		}
	}
	cout << "Матрица A\n";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++) {
			cout << A[i][j] << '\t';

		}
		cout << endl;
		cout << endl;
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++) {
			B[i][j] = rand() % 99;
		}
	}
	cout << "Матрица В\n";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++) {
			cout << B[i][j] << '\t';

		}
		cout << endl;
		cout << endl;
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++) {
			if (A[i][j] == B[i][j]) {
				a1++;
			}
			else if (A[i][j] < B[i][j]) {
				a2++;
			}
			else if (A[i][j] > B[i][j]) {
				a3++;
			}
		}
	}
	cout << "a = b: " << a1 << endl;
	cout << "a < b: " << a2 << endl;
	cout << "a > b: " << a3 << endl;
}

void task2() 
{
	int columns, rows;
	double A[10][10];
	
	cout << "Введите количество столбцов: ", cin >> columns;
	cout << "Введите количество строк: ", cin >> rows;

	srand((unsigned)time(NULL));

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++) {
			*(*(A + i) + j) = rand() % 100 - 10;
		}
	}
	cout << "Матрица\n";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++) {
			cout << *(*(A + i) + j) << '\t';

		}
		cout << endl;
		cout << endl;
	}
	int col = 0;
	bool f = true;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++) 
		{
			if (*(*(A + i) + j) < 0 && f) 
			{
				col = i + 1;
				
				for (int i = 0; i < rows; i++)
				{
					for (int j = 0; j < columns; j++) {
						if (j + 1 == col) {
							*(*(A + i) + j) /= 2;
						}
					}
				}
				cout<< "Номер строки: " << col << endl;
			}
		}
	}

	if (col) 
	{
		cout << "Изменённая матрица: " << endl;
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++) {
				cout << *(*(A + i) + j) << '\t';
			}
			cout << endl;
			cout << endl;
		}
	}
	else {
		cout << "Отрицательных элементов нет\n";
	}
}

int main()
{
	setlocale(LC_ALL, "Rus");
	cout << "1 задание\n";
	task1();
	cout << "2 задание\n";
	task2();
	cout << "1 доп. задание\n";
	dop1();
	cout << "2 доп. задание\n";
	dop2();
	cout << "3 доп. задание\n";
	dop3();
	
}

