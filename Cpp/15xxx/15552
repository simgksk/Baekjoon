#include <iostream>
#include <string>

using namespace std;

int main()
{
#pragma region 15552. ºü¸¥ A+B

	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int t, a, b;

	cin >> t;

	while (t--)
	{
		cin >> a >> b;
		cout << a + b << "\n";
	}

#pragma endregion

#pragma region 1264. ¸ðÀ½ÀÇ °³¼ö

	string s;

	while (true)
	{
		int cnt = 0;

		getline(cin, s);

		if (s == "#")
			break;

		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == 'a' || s[i] == 'A')
				cnt++;
			if (s[i] == 'e' || s[i] == 'E')
				cnt++;
			if (s[i] == 'i' || s[i] == 'I')
				cnt++;
			if (s[i] == 'o' || s[i] == 'O')
				cnt++;
			if (s[i] == 'u' || s[i] == 'U')
				cnt++;
		}
		cout << cnt << "\n";
	}

#pragma endregion

	return 0;
}
