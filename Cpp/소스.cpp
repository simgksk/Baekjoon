#include <iostream>

using namespace std;

int main()
{
#pragma region 2845. 파티가 끝나고 난 뒤

	int l, p, n;

	cin >> l >> p;

	for (int i = 0; i < 5; i++) 
	{
		cin >> n;

		cout << n - (l * p) << " ";
	}

#pragma endregion

#pragma region 15700. 타일 채우기 4

	long long int n, m;

	cin >> n >> m;

	cout << (n * m) / 2;

#pragma endregion

#pragma region 26767. Hurra!

	int n;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (i % 7 == 0 && i % 11 == 0)
			cout << "Wiwat!\n";
		else if (i % 7 == 0)
			cout << "Hurra!\n";
		else if (i % 11 == 0)
			cout << "Super!\n";
		else
			cout << i << "\n";
	}

#pragma endregion


	return 0;
}