#include <iostream>

using namespace std;

int main()
{
#pragma region 3449. �ع� �Ÿ�

	int t;
	string a, b;

	cin >> t;

	while (t--)
	{
		int cnt = 0;

		cin >> a >> b;

		for (int i = 0; i < a.length(); i++)
		{
			if (a[i] != b[i])
				cnt++;
		}

		cout << "Hamming distance is " << cnt << ".\n";
	}

#pragma endregion


	return 0;
}