#include <iostream>

using namespace std;

	int main()
	{
#pragma region 5524. 입실 관리

		int n;
		string si;

		cin >> n;

		for (int i = 0; i < n; i++)
		{
			cin >> si;
			
			for (int j = 0; j < si.size(); j++)
				si[j] = tolower(si[j]);

			cout << si << endl;
		}

#pragma endregion

#pragma region 15439. 베라의 패션

		int n;

		cin >> n;

		int i = n * (n - 1);

		cout << i << endl;

#pragma endregion

#pragma region 25304. 영수증

		int x, n, a, b;
		int sum = 0;

		cin >> x >> n;

		for (int i = 0; i < n; i++)
		{
			cin >> a >> b;

			sum += (a * b);
		}

		if (sum == x)
			cout << "Yes";
		else if (sum != x)
			cout << "No";

#pragma endregion

#pragma region 25600. Triathlon

		int n, a, d, g;
		int result = 0;
		int max = 0;

		cin >> n;

		for (int i = 0; i < n; i++)
		{
			cin >> a >> d >> g;

			if (a == d + g)
			{
				result = (a * (d + g)) * 2;

				if (result >= max)
					max = result;
				else
					max = max;
			}
			else if (a != d + g)
			{
				result = a * (d + g);

				if (result >= max)
					max = result;
				else
					max = max;
			}
		}

		cout << max;

#pragma endregion

#pragma region 30794. 가희와 클럽 오디션 1

		int lv;
		string judgment;

		cin >> lv >> judgment;

		if (judgment == "miss")
			cout << 0;
		else if (judgment == "bad")
			cout << 200 * lv;
		else if (judgment == "cool")
			cout << 400 * lv;
		else if (judgment == "great")
			cout << 600 * lv;
		else if (judgment == "perfect")
			cout << 1000 * lv;

#pragma endregion

		return 0;
	}

