#include <iostream>
#include <vector>

using namespace std;
//nomer4

int main()
{
	setlocale(LC_ALL, "Rus");
	int i;
	float buff{};
	float a{}, n, s, x{}, p, num;
	vector<int> nums;
	cout << "Введите сколько лет компания закупала инструменты ";
	cin >> n;
	cout << "Введите процент уценивания ";
	cin >> p;
	p *= 0.01;
	int spore = 0;
	for (i = 1; i <= n; i++)
	{
		spore++;
		cout << "\nВведите сумму за " << i << " год\n";
		cin >> s;
		nums.push_back(s);
	}
	int j=1;
	int k = -1;
	while (j <= n)
	{
		k++;
		num = nums[k] - (nums[k] * p * (n - j));
		buff += num;
		
		j++;
	}
	cout << buff;
}