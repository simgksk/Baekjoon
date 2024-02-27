#include <iostream>

using namespace std;

	int main()
	{
#pragma region 10807. 개수 세기

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

#pragma endregion

#pragma region 26545.  Mathematics

		int n, num;
		int add = 0;

		cin >> n;

		for (int i = 0; i < n; i++)
		{
			cin >> num;
			add += num;
		}

		cout << add << endl;

#pragma endregion

#pragma region 30087. 진흥원 세미나

		int n;
		string semina[8];

		cin >> n;

		for (int i = 0; i < n; i++)
		{
			cin >> semina[i];

			if (semina[i] == "Algorithm")
				cout << "204" << endl;
			if (semina[i] == "DataAnalysis")
				cout << "207" << endl;
			if (semina[i] == "ArtificialIntelligence")
				cout << "302" << endl;
			if (semina[i] == "CyberSecurity")
				cout << "B101" << endl;
			if (semina[i] == "Network")
				cout << "303" << endl;
			if (semina[i] == "Startup")
				cout << "501" << endl;
			if (semina[i] == "TestStrategy")
				cout << "105" << endl;
		}

#pragma endregion

#pragma region 9316. Hello Judge

		int n;

		cin >> n;

		for (int i = 1; i <= n; i++)
			cout << "Hello World, Judge " << i << "!" << endl;

#pragma endregion

#pragma region 10817. 세 수

		int a, b, c;

		cin >> a >> b >> c;

		if ((a <= b && a >= c) || (a >= b && a <= c))
			cout << a;
		else if ((b <= a && b >= c) || (b >= a && b <= c))
			cout << b;
		else if ((c <= a && c >= b) || (c >= a && c <= b))
			cout << c;

#pragma endregion

		return 0;

	}

