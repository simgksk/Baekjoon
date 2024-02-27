#include <iostream>

using namespace std;

	int main()
	{
#pragma region 2742. 기찍 N

		int n;

		cin >> n;

		for (int i = n; i > 0; i--)
			printf("%d\n", i);

#pragma endregion

#pragma region 5532. 방학 숙제

		int l, a, b, c, d;

		cin >> l >> a >> b >> c >> d;

		if (a / c > b / d) 
		{
			if (a % c > 0) 
				printf("%d", l - (a / c + 1));
			else if (a % c == 0)
				printf("%d", l - (a / c));
		}
		else if (a / c < b / d)
		{
			if (b % d > 0)
				printf("%d", l - (b / d + 1));
			else if (b % d == 0)
				printf("%d", l - (b / d));
		}
		else if (a / c == b / d)
		{
			if (a % c > 0)
				printf("%d", l - (a / c + 1));
			else if (a % c == 0)
				printf("%d", l - (a / c));
		}

#pragma endregion

#pragma region 10156. 과자

		int k, n, m;

		cin >> k >> n >> m;

		if (k * n > m)
			printf("%d", (k * n) - m);
		else if (k * n <= m)
			printf("%d", 0);

#pragma endregion

#pragma region 10768. 특별한 날

		int m, d;
		
		cin >> m >> d;

		if (m <= 1)
			cout << "Before" << endl;
		else if (m == 2)
		{
			if (d < 18)
				cout << "Before" << endl;
			else if (d == 18)
				cout << "Special" << endl;
			else if (d > 18)
				cout << "After" << endl;
		}
		else if (m > 2)
			cout << "After" << endl;

		return 0;

#pragma endregion




	}

