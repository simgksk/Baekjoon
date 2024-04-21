#include <iostream>

using namespace std;

int main()
{
	//9506. 약수들의 합
	int n;

	while (true)
	{
		int sum = 0;
		cin >> n;

		if (n == -1)
			break;

		for (int i = 1; i < n; i++)
		{
			if (n % i == 0)
				sum += i;
		}

		if (n == sum)
		{
			cout << n << " = 1";

			for (int i = 2; i < n; i++)
			{
				if (n % i == 0)
					cout << " + " << i;
			}
			cout << "\n";
		}

		else
			cout << n << " is NOT perfect.\n";
	}

	return 0;
}