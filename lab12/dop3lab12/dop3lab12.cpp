#include <iostream>
#include <sstream>
using namespace std;
//4
int main() {
	
	char stringA[256];
	int k=0;
	puts("Введите предложение: ");
	gets_s(stringA);
	char word[256] = {};          //Буфер для считывания строки
	stringstream x;        //Создание потоковой переменной
	x << stringA;                 //Перенос строки в поток
	while (x >> word) {
		//cout << word << " ";
		k++;
		if (k % 2 == 0) {
			for (int i = strlen(word); i >= 0; i--)
			{
				cout << word[i];
			}
			cout << " ";
		}
		else {
			cout << "";
		}
	}
}
