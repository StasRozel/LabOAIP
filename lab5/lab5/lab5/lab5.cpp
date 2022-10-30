#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
	cout << "Цикл for\n";
    float w, s, y = 5, t = -7.4, n = 9, j[3] = { 0.5, 8.4, 0.3 };
	for (int i = 0; i <= 2; i++)
	{
		w = 0.6 * j[i] + exp(t * j[i]) * pow((4 * y / n), 2);
		s = sqrt(w - 0.1 * t) / (2 + pow(n, 2));
		cout <<"w = " << w << endl;
		cout <<"s = " << s << endl;
	}
	cout << "Цикл while\n";
	float j_1 = 0;
	while (j_1 < 2)
	{
		w = 0.6 * j_1 + exp(t * j_1) * pow((4 * y / n), 2);
		s = sqrt(w - 0.1 * t) / (2 + pow(n, 2));
		cout << "w = " << w << endl;
		cout << "s = " << s << endl;
		j_1 += 0.1;
	}
	cout << "Оба цикла\n";
	float y_1[3] = {0.1, -3,  0.5};
	 
	for (int i = 0; i <= 2; i++) {
		float j_2 = 0.1;
		while (j_2 < 0.4) {
			j_2 += 0.1;
			w = 0.6 * j_1 + exp(t * j_1) * pow((4 * y / n), 2);
			s = sqrt(w - 0.1 * t) / (2 + pow(n, 2));
			cout << "w = " << w << endl;
			cout << "s = " << s << endl;
		}
	}

}
