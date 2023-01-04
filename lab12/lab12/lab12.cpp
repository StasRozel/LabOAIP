#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <sstream>
using namespace std;

void var8v1() {
	int size = 256, i;
	char stringA[256], stringB[256];
	puts("Введите строку А: ");
	gets_s(stringA);
	puts("Введите строку B: ");
	gets_s(stringB);
	bool a;
	for (i = 0; stringA[i] != 0; i++) {
		a = true;
		for (int j = 0; stringB[j] != 0; j++) {
				if (stringA[i] == stringB[j] && stringA[i] != ' ') {
				cout << stringA[i] << ' ';
				break;
			}
			}
		}
	}


void var8v2() {
	char stringA[256], stringB[256], * psA, * psB;
	puts("Введите строку А: ");
	gets_s(stringA);
	puts("Введите строку B: ");
	gets_s(stringB);
	for (psA = stringA; *psA != 0; psA++) {
		for (psB = stringB; *psB != 0; psB++) {
			if (*psA == *psB && *psA != ' ') {
				cout << *psA << ' ';
			}
		}
	}
}

/*void task2() {
	char str[256];
	gets_s(str);

	for (int i = 0; str[i] != '\0'; i++)
	{
		int k = i;
		while (str[i] == str[i + 1]) i++;

		if ((abs(k - i) % 2))
		{
			for (int t = k; t <= i; t++)
				printf("%c", str[t]);

			printf("\n");
		}
	}
}*///1101 000 11 0001
////011111100111110
void task2() {
	char stringA[256];
	int k = 0;
	puts("Введите предложение: ");
	gets_s(stringA);
	char word[256] = {};          //Буфер для считывания строки
	stringstream x;        //Создание потоковой переменной
	x << stringA;                 //Перенос строки в поток
	while (x >> word) {
		//cout << word << " ";
		if (strlen(word) % 2 == 0) {
			
				cout << word << " ";
			
		}
		else {
			cout << "";
		}
	}
}
void task2_2() {
	char str[256], *pst;
	gets_s(str);
	int i = 0;
	for (pst = str; *pst != '\0'; pst++, i++)
	{
		int k = i;
		while (*pst == *pst + 1) i++;

		if ((abs(k - i) % 2))
		{
			for (int t = k; t <= i; t++)
				printf("%c", str[t]);

			printf("\n");
		}
	}
}

int main()
{
	setlocale(LC_ALL, "Rus");
	//var8v1();
	//var8v2();
	cout << "\nЗадание 2\n";
	task2();
	//task2_2();
	return 0;
}