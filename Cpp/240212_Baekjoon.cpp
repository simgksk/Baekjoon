﻿#include <iostream>

using namespace std;

	int main()
	{
#pragma region 5522. 카드 게임

		int a;
		int sum = 0;

		for (int i = 0; i < 5; i++)
		{
			cin >> a;
			sum += a;
		}

		cout << sum << endl;

		return 0;

#pragma endregion

#pragma region 27959. 초코바

		int n, m;

		cin >> n >> m;

		if (n * 100 >= m)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;

		return 0;

#pragma endregion

#pragma region 28235. 코드마스터 2023

		string aid;

		cin >> aid;

		if (aid == "SONGDO")
			cout << "HIGHSCHOOL" << endl;
		else if (aid == "CODE")
			cout << "MASTER" << endl;
		else if (aid == "2023")
			cout << "0611" << endl;
		else if (aid == "ALGORITHM")
			cout << "CONTEST" << endl;

		return 0;

#pragma endregion

#pragma region 28444. HI-ARC=?

		int h, i, a, r, c;

		cin >> h >> i >> a >> r >> c;

		cout << (h * i) - (a * r * c) << endl;

		return 0;

#pragma endregion

#pragma region 28701. 세제곱의 합

		int n;
		int sum1 = 0, sum2 = 0, sum3 = 0;

		cin >> n;

		for (int i = 1; i <= n; i++)
		{
			sum1 += i;
			sum2 = sum1*sum1;
			sum3 += i * i * i;
		}

		cout << sum1 << endl;
		cout << sum2 << endl;
		cout << sum3 << endl;

		return 0;

#pragma endregion

#pragma region 29751. 삼각형

		float w, h;

		cin >> w >> h;

		printf("%.1f", (w * h) / 2);

		return 0;

#pragma endregion

#pragma region 10818. 최소, 최대

		int n;
		long int min = 1000000;
		long int max = -1000000;

		cin >> n;

		for (int i = 0; i < n; i++)
		{
			int num;

			cin >> num;

			if (num <= min)
				min = num;
			else
				min = min;

			if (num >= max)
				max = num;
			else
				max = max;
		}

		printf("%d %d", min, max);

		return 0;

#pragma endregion

	}