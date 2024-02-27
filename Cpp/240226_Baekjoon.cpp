#include <iostream>

using namespace std;

	int main()
	{
#pragma region 7595. Triangles

		int n;

		while (true)
		{
			cin >> n;

			if (n == 0)
				break;

			for (int i = 1; i <= n; i++)
			{
				for (int j = 1; j <= i; j++)
					printf("*");
				printf("\n");
			}
		}

#pragma endregion

#pragma region 9772. Quadrants

		float x, y;

		while (true)
		{
			cin >> x >> y;

			if ((x < 0 && y == 0) || (x > 0 && y == 0))
				cout << "AXIS" << endl;
			else if ((x == 0 && y < 0) || (x == 0 && y > 0))
				cout << "AXIS" << endl;
			else if (x > 0 && y > 0)
				cout << "Q1" << endl;
			else if (x < 0 && y > 0)
				cout << "Q2" << endl;
			else if (x < 0 && y < 0)
				cout << "Q3" << endl;
			else if (x > 0 && y < 0)
				cout << "Q4" << endl;
			else if (x == 0 && y == 0)
			{
				cout << "AXIS";
				break;
			}
		}

#pragma endregion

#pragma region 11549. Identifying tea

		int t;
		int abcde;
		int n = 0;

		cin >> t;

		for (int i = 0; i < 5; i++)
		{
			cin >> abcde;
			if (abcde == t)
				n++;
		}

		cout << n;

#pragma endregion

#pragma region 13985. Equality
		
		int a, b, c;
		char s;

		cin >> a >> s >> b >> s >> c;

		if (a + b == c)
			cout << "YES";
		else
			cout << "NO";

#pragma endregion

#pragma region 31428. 앨리스 트랙 매칭

		int n;
		int result = 0;
		string c[10001];
		string s;

		cin >> n;

		for (int i = 1; i <= n; i++)
			cin >> c[i];

		cin >> s;

		for (int i = 0; i < 10001; i++)
		{
			if (s == c[i])
				result++;
		}

		cout << result;

#pragma endregion

		return 0;
	}
