#include <iostream>
#include <string>

using namespace std;

int main()
{
#pragma region 2739. ±¸±¸´Ü

	int n;

	cin >> n;

	for (int i = 1; i <= 9; i++)
		printf("%d * %d = %d\n", n, i, n * i);

#pragma endregion

#pragma region 10950. A+B - 3

	int t, a, b;

	cin >> t;

	while (t--)
	{
		cin >> a >> b;

		cout << a + b << "\n";
	}

#pragma endregion

#pragma region 8393. ÇÕ

	int n;
	int sum = 0;

	cin >> n;

	for (int i = 1; i <= n; i++)
		sum += i;

	cout << sum;

#pragma endregion

#pragma region 11021. A+B - 7

	int t, a, b;

	cin >> t;

	for (int i = 1; i <= t; i++)
	{
		cin >> a >> b;

		printf("Case #%d: %d\n", i, a + b);
	}

#pragma endregion

#pragma region 11022. A+B - 8

	int t, a, b;

	cin >> t;

	for (int i = 1; i <= t; i++)
	{
		cin >> a >> b;

		printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
	}

#pragma endregion

#pragma region 2438. º° Âï±â - 1

	int n;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
			cout << "*";
		cout << "\n";
	}

#pragma endregion

#pragma region 2439. º° Âï±â - 2

	int n;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
			cout << " ";
		for (int k = 1; k <= i; k++)
			cout << "*";
		cout << "\n";
	}

#pragma endregion

	return 0;
}