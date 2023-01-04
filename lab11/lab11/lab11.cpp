#include<iostream>
using namespace std;

int array_unique(int a[], int n) {
	int i, j, m = 0;
	for (i = 0; i < n; ++i) {
		j = i + 1;
		while ((j < n) && (a[j] != a[i]))
			++j;

		if (j == n)
			a[m++] = a[i];
	}
	return m;
}

void task1() {
	setlocale(LC_ALL, "Rus");

	const int maxSize = 99;
	int UsName, min = 0;
	int n, m, i, x[maxSize], y[maxSize], z[maxSize], k = 0;
	cout << "Введите размер массива (не более 99)" << endl;
	cin >> n;
	if (n > 99) return;
	cout << "Массив х: ";
	for (i = 0; i < n; i++)
	{
		x[i] = rand() % 99;
		cout << x[i] << " ";
	}
	cout << "\nВведите размер массива (не более 99)" << endl;
	cin >> m;
	if (n > 99) return;
	cout << "Массив y: ";
	for (i = 0; i < m; i++)
	{
		y[i] = rand() % 99;
		cout << y[i] << " ";
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (x[i] == y[j]) {
				k++;
				z[k] = x[i];
			}
		}
	}
	cout << endl;
	cout << "Массив z: ";
	int q = sizeof(z) / sizeof(z[0]);
	q = array_unique(z, n);
	for (int i = 0; i < q; i++)
	{
		if (z[i] != -858993460)
			cout << z[i] << " ";
	}
	cout << endl;
	cout << "\nВведите делитель, чтобы найти кратность: ", cin >> UsName;
	cout << "Кратные числа в массиве x: ";
	int j = 0, arrX[99];
	for (int i = 0; i < n; i++)
	{
		if (x[i] % UsName == 0) {
			arrX[j++] = x[i];
			cout << x[i] << ' ';
		}
	}
	
	for (int i = 0; i < j; i++)
	{
		if (arrX[i] < arrX[min]) {
			min = i;
		}
	}
	int aX = arrX[min];
	cout << "\nМинимальная кратность массива х: " << aX << endl;
	
	min = 0;
	int s = 0, arrY[99];
	cout << endl << "Кратные числа в массиве у ";
	for (int i = 0; i < m; i++)
	{
		if (y[i] % UsName == 0) {
			arrY[s++] = y[i];
			cout << y[i] << " ";
		}
	}
	for (int i = 0; i < s; i++)
	{
		if (arrY[i] < arrY[min]) {
			min = i;
		}
	}
	int aY = arrY[min];
	cout << "\nМинимальная кратность массива y: " << aY << endl;

	min = 0;
	int f = 0, arrZ[99];
	cout << endl << "Кратные числа в массиве z ";
	for (int i = 0; i < k; i++)
	{
		if (z[i] % UsName == 0 && z[i] != -858993460) {
			arrZ[f++] = z[i];
			cout << z[i] << ' ';
		}
		
	}
	for (int i = 0; i < f; i++)
	{
		if (arrZ[i] < arrZ[min] && z[i] != -858993460) {
			min = i;
			

		}
	}
	int aZ = arrZ[min];
	cout << "\nМинимальная кратность массива z: " << aZ << endl;
	bool u = true;
	for (int i = 0; i < f; i++)
	{
		if (aX == arrZ[i] && aY == arrZ[i]) {
			cout << "\nЭлементы массива z: " << arrZ[min] << endl;
			u = false;
		}
		
		
	}
	
	if (u) {
		cout << "В массиве z таких элементов нет\n";
	}

}

void task2() {
	//Пусть есть некоторый массив удовлетворяющий условиям задачи
	int N = 9;
	int* arr = new int[N];
	arr[0] = 24;
	arr[1] = 12;
	arr[2] = 18;
	arr[3] = 6;
	arr[4] = 36;
	arr[5] = 96;
	arr[6] = 54;
	arr[7] = 72;
	arr[8] = 48;

	//Отсортируем его по возрастанию
	for (int i = 0; i < N - 1; i++)
		for (int j = i + 1; j < N; j++)
			if (arr[i] > arr[j]) {
				int buff = arr[i];
				arr[i] = arr[j];
				arr[j] = buff;
			}

	//Убираем элементы не подходящие нам по условию   
	for (int i = N - 1; i >= 0; i--) //Начинаем перебор с самого большого числа в массиве.
		for (int j = 0; j < i; j++) //Проверяем все оставшиеся элементы на выполнения условия
			if (arr[i] % arr[j] != 0) { //Если не выполняется деления без остатка на j
				for (int k = j; k < N - 1; k++)
					arr[k] = arr[k + 1];//то затираем значение массива с индексом j, следующим за ним.
				N--;//Уменьшаем размер массива.
			}
	//Выводим результат.
	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";

	delete[] arr;
}

int main()
{
	task1();
	cout << "Задание 2" << endl;
	task2();

	return 0;
}


