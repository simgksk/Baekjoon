#include <iostream>

using namespace std;

	int main()
	{
#pragma region 5596. 시험 점수

		int min_Jeongbo, min_Math, min_Science, min_English;
		int man_Jeongbo, man_Math, man_Science, man_English;

		cin >> min_Jeongbo >> min_Math >> min_Science >> min_English;
		cin >> man_Jeongbo >> man_Math >> man_Science >> man_English;

		int s = min_Jeongbo + min_Math + min_Science + min_English;
		int t = man_Jeongbo + man_Math + man_Science + man_English;

		if (s > t)
			cout << s << endl;
		else if (s < t)
			cout << t << endl;
		else if (s == t)
			cout << s << endl;

		return 0;

#pragma endregion

#pragma region 10797. 10부제

		int day, a, b, c, d, e;
		int sum = 0;

		cin >> day >> a >> b >> c >> d >> e;

		if (day == a)
			sum += 1;
		if (day == b)
			sum += 1;
		if (day == c)
			sum += 1;
		if (day == d)
			sum += 1;
		if (day == e)
			sum += 1;

		cout << sum << endl;

		return 0;

#pragma endregion
		
#pragma region 14489. 치킨 두 마리

		int a, b, c;

		cin >> a >> b >> c;

		if (a + b < c)
			cout << a + b << endl;

		else if (a + b > c)
		{
			if (a + b >= c * 2)
				cout << (a + b) - (c * 2) << endl;
			else if (a + b < c * 2)
				cout << a + b << endl;
		}

		else if (a + b == c)
			cout << a + b << endl;

		return 0;

#pragma endregion

#pragma region 2920. 음계

		int c, d, e, f, g, a, b, c2;

		cin >> c >> d >> e >> f >> g >> a >> b >> c2;

		if (c == 1 && d == 2 && e == 3 && f == 4 && g == 5 && a == 6 && b == 7 && c2 == 8)
			cout << "ascending" << endl;
		else if (c == 8 && d == 7 && e == 6 && f == 5 && g == 4 && a == 3 && b == 2 && c2 == 1)
			cout << "descending" << endl;
		else
			cout << "mixed" << endl;

		return 0;

#pragma endregion

#pragma region 19944번. 뉴비의 기준은 뭘까?

		int n, m;

		cin >> n >> m;

		if (m == 1 || m == 2)
			cout << "NEWBIE!" << endl;
		else if (n >= m && m > 2)
			cout << "OLDBIE!" << endl;
		else if(n < m)
			cout << "TLE!" << endl;

		return 0;

#pragma endregion

#pragma region 20499. Darius님 한타 안 함?

		int k, d, a;
		char c;

		cin >> k >> c >> d >> c >> a;

		if (k + a < d || d == 0)
			cout << "hasu" << endl;
		else
			cout << "gosu" << endl;

		return 0;
		

#pragma endregion

#pragma region 2576. 홀수

		int num;
		int sum = 0;
		int min = 100;

		for (int i = 0; i < 7; i++)
		{
			cin >> num;

			if (num % 2 != 0)
			{
				sum += num;
				if (num <= min)
					min = num;
				else
					min = min;
			}
		}

		if (sum == 0)
			cout << "-1" << endl;
		else
		{
			cout << sum << endl;
			cout << min << endl;
		}

		return 0;

#pragma endregion




	}


