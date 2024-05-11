#include <iostream>

using namespace std;

	int main()
	{
		int n, v;
		int num[101];
		int result = 0;

		cin >> n;

		for (int i = 0; i < n; i++)
			cin >> num[i];

		cin >> v;

		for (int i = 0; i < n; i++)
		{
			if (v == num[i])
				result++;
		}

		cout << result << endl;

		return 0;
	}
