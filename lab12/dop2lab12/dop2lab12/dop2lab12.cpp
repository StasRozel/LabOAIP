//#define _CRT_SECURE_NO_WARNINGS
//
//#include "iostream"
//#include "conio.h"
//using namespace std;
////3
//char* del(char* inStr)
//{
//    char* newStr = new char[strlen(inStr) + 1]; // Итоговая (результирующая) строка
//    char* bufStr = new char[strlen(inStr) + 1]; // Буфер обмена (хранение текущего слова)
//    *newStr = '\0'; // "Обнуляем" результирующую строку newStr
//    int i = 0;      // Индекс текщей позиции в буфере
//    while (true)
//    {
//        if (*inStr == ' ' || *inStr == '\0')
//        {
//            bufStr[i] = '\0'; // "Замыкаем" буфер обмена
//            if (strstr(newStr, bufStr) == NULL) // Ищем в результирующей строке слово расположенное в буфере
//            {
//                strcat(newStr, bufStr); // Добовляем в конец результирующей строки слово из буфера
//            }
//            while (*inStr == ' ') // Пропускаем все пробелы и запятые
//            {
//                int len = strlen(newStr);
//                newStr[len] = *inStr++; // Тупо добавляем эти символы в результирующую строку
//                newStr[len + 1] = '\0'; // "Замыкаем"
//            }
//            i = 0; // Заново забиваем буфер
//        }
//        if (*inStr == '\0') // Ну, это для выхода
//        {
//            break;
//        }
//        bufStr[i++] = *inStr++; // Копируем текущей символ с входной строки в буфер
//    }
//    delete bufStr;
//    return newStr;
//}
//
//int main()
//{
//    char* t = new char[255]; // на время выделяется память (с запасом) под строку 
//    cin.getline(t, 255); // чтение строки
//
//    char* s = new char[strlen(t) + 1]; // выделяется новая память под размер введённой строки
//    strcpy(s, t); // копируется строка в новую память
//
//    delete[] t; // ненужная память освобождается
//
//    s = del(s);
//    cout << s << "\n";
//    return 0;
//}
#include <iostream>
#include <string>

using namespace std;

string w, k[1000002];

int main()
{
    getline(cin, w);
    int s = 0;

    for (int i = 0; i < w.length(); i++) {
        if (w[i] == ' ') {
            s++;
            continue;
        }
        k[s] += w[i];
    }

    bool z = true;

    for (int i = 0; i <= s; i++) {
        for (int j = 0; j < k[i].length(); j++) {
            if (!isdigit(k[i][j])) {
                z = false;
                break;
            }
        }
        if (z) {
            cout << k[i] << " ";
        }
        z = true;
    }

    cout << endl;
    z = true;

    for (int i = 0; i <= s; i++) {
        for (int j = 0; j < k[i].length(); j++) {
            if (!isalpha(k[i][j])) {
                z = false;
                break;
            }
        }
        if (z) {
            cout << k[i] << " ";
        }
        z = true;
    }
    
    cout << endl;
    z = true;
    bool z1 = true;

    for (int i = 0; i <= s; i++) {
        for (int j = 0; j < k[i].length(); j++) {
            if (isdigit(k[i][j])) {
                z = false;
            }
            if (isalpha(k[i][j])) {
                z1 = false;
            }
        }
        if (!z && !z1) {
            cout << k[i] << " ";
        }
        z = true;
        z1 = true;
    }
    return 0;
}
