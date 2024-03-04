#include <iostream>
#include <string>
#include <cctype>

using namespace std;

	int main()
	{
#pragma region 2386. 도비의 영어 공부

		char c;
		string s;

		while (true)
		{
			cin >> c;
			getline(cin, s);

			int cnt = 0;

			if (c == '#')
				break;

			for (int i = 0; i < s.length(); i++)
			{
				
				if (s[i]==c || s[i]==toupper(c))
					cnt++;
			}
			
			cout << c << " " << cnt << "\n";
		}

#pragma endregion

#pragma region 11721. 열 개씩 끊어 출력하기

		string str;

		cin >> str;

		for (int i = 0; i < str.length(); i++)
		{
			cout << str[i];

			if (i % 10 == 9)
				cout << "\n";
		}

#pragma endregion

#pragma region 21598. SciComLove

		int n;

		cin >> n;

		for (int i = 0; i < n; i++)
		{
			cout << "SciComLove" << "\n";
		}

#pragma endregion

#pragma region 21612. Boiling Water

		int b;

		cin >> b;

		int p = 5 * b - 400;

		cout << p << "\n";

		if (p < 100)
			cout << "1";
		else if (p == 100)
			cout << "0";
		else if (p > 100)
			cout << "-1";

#pragma endregion

		return 0;
	}
