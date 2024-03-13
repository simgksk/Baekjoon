#include <iostream>

using namespace std;

int main()
{
#pragma region 3058. 짝수를 찾아라

		int t, n;

		cin >> t;

		for (int i = 0; i < t; i++)
		{
			int sum = 0;
			int min = 101;

			for (int j = 0; j < 7; j++)
			{
				cin >> n;

				if (n % 2 == 0)
				{
					sum += n;

					if (n <= min)
						min = n;
					else
						min = min;
				}
			}
			cout << sum << " " << min << "\n";
		}

#pragma endregion

	return 0;
}