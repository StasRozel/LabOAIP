#include <stdio.h>
#include <stdlib.h>

#include <ctime>
#include <iostream>

#include "Header.h"
using namespace std;

void task1() {
	int* ptr, i, n, nullsymb = 0, sum = 0;
	bool f = true;
	printf_s("Введите размер массива \n");
	scanf_s("%d", &n);
	if (!(ptr = (int*)malloc(n * sizeof(int)))) 
	{ 
		printf_s("Введено не верное значение\n");
		return;
	}
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
	{
		/*printf_s("Введите значение элемента %d\n", i);
		scanf_s("%d", ptr + i);*/
		*(ptr + i) = rand() % 10 - 5;
	}
	printf_s("\nМассив: \n", i + 1);
	for (i = 0; i < n; i++) {
		printf("%d ", *(ptr + i));
	}
	for (i = n - 1; i >= 0; i--) {
		if (*(ptr + i) == 0 && f) {
			nullsymb = i;
			f = false;
		}

	}
	int count = 0;
	for (int i = nullsymb; i < n; i++)
	{
		if (*(ptr + i) > 0)
		{
			count++;
			
		}
	}
	for (int i = nullsymb; i < n; i++)
	{
		sum += *(ptr + i);
	}
	printf_s("\nКоличество положительнх чисел после последнего нулевого элемента %d\n", count);
	if (!f) {
		printf_s("Номер последнего нулевого элемента %d\n", nullsymb+1);
		printf_s("Сумма %d\n", sum);
	}
	else {
		printf_s("Нулей нет\n");
	}
	free(ptr); //освобождение динамической памяти
}

void task2() {
	int M, N, i, j, cols = 0, ** matrix, * arr{};
	bool bcols = true;
	
	cout << "Введите количество строк ";
	cin >> M;
	cout << "Введите количество столбцов ";
	cin>> N;
	srand(time(0));

	matrix = new int* [M];
	for (i = 0; i < M; i++)
		matrix[i] = new int[N];

	for (i = 0; i < M; i++) // ввод 
		for (j = 0; j < N; j++)
		{
			matrix[i][j] = 1 + rand() % 10 - 5;
		}
	int count = 0, k = 0;
	for (i = 0; i < M; i++) // ввод 
		for (j = 0; j < N; j++)
		{

			if (matrix[i][j] == 0)
			{

				count++;
			}
		}
	arr = new int[count];
	for (i = 0; i < M; i++) // ввод 
		for (j = 0; j < N; j++)
		{

			if (matrix[i][j] == 0)
			{
				cols = j + 1;
				arr[k] = cols;
				k++;
			}
		}
	int min = arr[0];
	for (int i = 0; i < count; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << "Матрица\n";
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << matrix[i][j] << '\t';
		}
		cout << endl;
		cout << endl;
	}

	if (count == 0) {
		cout << "В матрице нет нулевых элементов";
	} 
	else {
		cout << "Номер первого столбца, содержащиего нулевой элемент: " << min << endl;
	}
	for (int k = 0; k < M; k++) //освобождение памяти
		delete[] matrix[k];
	delete[] matrix;
}

void main()
{
	setlocale(LC_ALL, "Rus");
	cout << "1 задание\n";
	task1();
	cout << "2 задание\n";
	task2();
}