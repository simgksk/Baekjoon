#include <iostream>

using namespace std;

int main()
{
	//9085. ´õÇÏ±â
	int t, n, k;

	cin >> t;

	while (t--)
	{
		cin >> n;

		int sum = 0;

		for (int i = 0; i < n; i++)
		{
			cin >> k;
			sum += k;
		}

		cout << sum << "\n";
	}

	return 0;
}