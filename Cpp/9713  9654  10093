#include <iostream>

using namespace std;

	int main()
	{
#pragma region 9713. Sum of Odd Sequence

		int t, n;

		cin >> t;
		
		for (int i = 0; i < t; i++)
		{
			int sum = 0;

			cin >> n;

			for (int j = 1; j <= n; j++)
			{
				if (j % 2 == 1)
					sum += j;
			}

			cout << sum << endl;
		}

#pragma endregion

#pragma region 9654. 나부 함대 데이터

		cout << "SHIP NAME      CLASS          DEPLOYMENT IN SERVICE" << endl;
		cout << "N2 Bomber      Heavy Fighter  Limited    21        " << endl;
		cout << "J-Type 327     Light Combat   Unlimited  1         " << endl;
		cout << "NX Cruiser     Medium Fighter Limited    18        " << endl;
		cout << "N1 Starfighter Medium Fighter Unlimited  25        " << endl;
		cout << "Royal Cruiser  Light Combat   Limited    4         " << endl;

#pragma endregion

#pragma region 10093. 숫자

		long long a, b;

		cin >> a >> b;

		if (a < b)
		{
			cout << b - a - 1 << endl;

			for (long long i = a + 1; i < b; i++)
			{
				cout << i << ' ';
			}
		}

		else if (a > b)
		{
			cout << a - b - 1 << endl;

			for (long long i = b + 1; i < a; i++)
			{
				cout << i << ' ';
			}
		}

		else if (a == b || a - b == 1 || b - a == 1)
			cout << 0;

#pragma endregion

		return 0;

	}
