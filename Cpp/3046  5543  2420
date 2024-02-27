#include <iostream>

using namespace std;

	int main()
	{
#pragma region 3046. R2

		int r1, s;

		cin >> r1 >> s;

		cout << (s * 2) - r1 << endl;

#pragma endregion

#pragma region 5543. 상근날드

		int s_burger, j_burger, h_burger, cola, cider;

		cin >> s_burger >> j_burger >> h_burger >> cola >> cider;

		if (s_burger < j_burger && s_burger < h_burger)
		{
			if (cola < cider)
				cout << (s_burger + cola) - 50 << endl;
			else if (cider < cola)
				cout << (s_burger + cider) - 50 << endl;
			else if (cola == cider)
				cout << (s_burger + cola) - 50 << endl;
		}

		else if(s_burger == j_burger)
		{
			if (s_burger < h_burger)
			{
				if (cola < cider)
					cout << (s_burger + cola) - 50 << endl;
				else if (cider < cola)
					cout << (s_burger + cider) - 50 << endl;
				else if (cola == cider)
					cout << (s_burger + cola) - 50 << endl;
			}
			else if (s_burger > h_burger)
			{
				if (cola < cider)
					cout << (h_burger + cola) - 50 << endl;
				else if (cider < cola)
					cout << (h_burger + cider) - 50 << endl;
				else if (cola == cider)
					cout << (h_burger + cola) - 50 << endl;
			}
		}

		else if(j_burger < s_burger && j_burger < h_burger)
		{
			if (cola < cider)
				cout << (j_burger + cola) - 50 << endl;
			else if (cider < cola)
				cout << (j_burger + cider) - 50 << endl;
			else if (cola == cider)
				cout << (j_burger + cola) - 50 << endl;
		}
		else if (j_burger == h_burger)
		{
			if (j_burger < s_burger)
			{
				if (cola < cider)
					cout << (j_burger + cola) - 50 << endl;
				else if (cider < cola)
					cout << (j_burger + cider) - 50 << endl;
				else if (cola == cider)
					cout << (j_burger + cola) - 50 << endl;
			}
			else if (s_burger < h_burger)
			{
				if (cola < cider)
					cout << (s_burger + cola) - 50 << endl;
				else if (cider < cola)
					cout << (s_burger + cider) - 50 << endl;
				else if (cola == cider)
					cout << (s_burger + cola) - 50 << endl;
			}
		}

		else if(h_burger < s_burger && h_burger < j_burger)
		{
			if (cola < cider)
				cout << (h_burger + cola) - 50 << endl;
			else if (cider < cola)
				cout << (h_burger + cider) - 50 << endl;
			else if (cola == cider)
				cout << (h_burger + cola) - 50 << endl;
		}
		else if (s_burger == h_burger)
		{
			if (s_burger < j_burger)
			{
				if (cola < cider)
					cout << (s_burger + cola) - 50 << endl;
				else if (cider < cola)
					cout << (s_burger + cider) - 50 << endl;
				else if (cola == cider)
					cout << (s_burger + cola) - 50 << endl;
			}
			else if (s_burger > j_burger)
			{
				if (cola < cider)
					cout << (j_burger + cola) - 50 << endl;
				else if (cider < cola)
					cout << (j_burger + cider) - 50 << endl;
				else if (cola == cider)
					cout << (j_burger + cola) - 50 << endl;
			}
		}

#pragma endregion

#pragma region 2420. 사파리월드

		long int n, m;

		cin >> n >> m;

		if (n - m < 0)
			cout << (-2 * (n - m)) + (n - m) << endl;
		else if(n-m >= 0)
			cout << n - m << endl;

		return 0;

#pragma endregion


	}
