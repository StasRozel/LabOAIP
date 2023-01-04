#include <iostream>
using namespace std;
int& task1(float(*arr), int n);
void* task2(double(**matrix), int M, int N);

int &task1(float(*arr), int n) {
	float sum = 0, sumArr[100], sum1 = 0, sum1Arr[100];
	arr = new float[n];
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
	{
		//cin >> arr[i];
		arr[i] = 0.01 * (rand() % 1001 - 500);
	}
	cout << "Массив\n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < 0) {
			arr[i] = pow(arr[i], 2);
		}
	}
	cout << endl;
	cout << "\nИзмененный массив\n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	int j = 0, k = 0;
	cout << "\nСумма до элемента\n";
	for (int i = 0; i < n; i++)
	{
		if (i == 0) {
			sum = 0;
			
		}
		else {
			sum += arr[i - 1];
			sumArr[k++] = sum;
		}

			

		cout << "Номер: " << i  << " " << sum << endl;

	}
	cout << "Сумма после элемента	" << endl;
	k = 0;
	j = 0;
	int in = 0;
	float raz, raz1;
	int l = n - 1;
	for (int i = l ; i >= 0; i--)
	{
	
		if (i == l) {
			sum1 = 0;
			sum1Arr[k++] = sum1;
		}
		else {
			sum1 += arr[i + 1];
			sum1Arr[k++] = sum1;
		}

		
	}
	for (int i = l; i >= 0; i--)
	{
		
			cout << "Номер: " << j << " " << sum1Arr[i] << endl;
	
		j++;
	}
	
	raz = sumArr[0] - sum1Arr[l];
	raz = abs(raz);
	for (int i = 0; i < n; i++)
	{

		raz1 = sumArr[i] - sum1Arr[j];
		raz1 = abs(raz1);

		if (raz > raz1) {
			raz = raz1;
			in = i;

		}
		j--;
	}
	cout << "\nИндекс элемента " << in << endl;

	
	delete[] arr;
	
	//cout << "Индекс элемента " << in << "\nРазница между суммами до и после элемента " << raz << endl;
	return in;
}

void* task2(double(**matrix), int M, int N) {
	int i, j, cols = 0, * arr;

	bool bcols = true;

	srand((unsigned)time(NULL));

	matrix = new double* [M];
	for (i = 0; i < M; i++)
		matrix[i] = new double[N];

	for (i = 0; i < M; i++) // ввод 
		for (j = 0; j < N; j++)
		{
			*(*(matrix + i) + j) = 1 + rand() % 10 - 5;
		}
	int count = 0, k = 0;
	for (i = 0; i < M; i++) // ввод 
		for (j = 0; j < N; j++)
		{

			if (*(*(matrix + i) + j) < 0)
			{
				count++;
			}
		}
	arr = new int[count];
	for (i = 0; i < M; i++) // ввод 
		for (j = 0; j < N; j++)
		{

			if (*(*(matrix + i) + j) < 0)
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
			cout << *(*(matrix + i) + j) << '\t';
		}
		cout << endl;
		cout << endl;
	}
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++) {
			if (j + 1 == min) {
				*(*(matrix + i) + j) /= 2;
			}
		}
	}

	cout << "Измененная матрица\n";
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << *(*(matrix + i) + j) << '\t';
		}
		cout << endl;
		cout << endl;
	}

	cout << "Номер первого столбца, содержащиего отрицательный элемент: " << min << endl;
	for (int k = 0; k < M; k++)	
		delete[] matrix[k];
	delete[] matrix;
	return 0;
}

int main()
{
	setlocale(LC_ALL, "Rus");

	double** matrix = {};
	float* arr{};
	int M, N, n;
	cout << "Первое задание\n";
	cout << "Введите размер массива\n";
	cin >> n;
	task1(arr, n) = 1;
	cout << '\n';
	cout << "Второе задание\n";
	cout << "Введите количество столбцов: ", cin >> N;
	cout << "Введите количество строк: ", cin >> M;
	task2(matrix, M, N);
}