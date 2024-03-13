#include <iostream>
#include <string>

using namespace std;

int main()
{
#pragma region 2711. 오타맨 고창영

	int t, n;
	string str;

	cin >> t;

	while (t--)
	{
		cin >> n >> str;

		cout << str.erase(n-1, 1) + "\n";
	}

#pragma endregion

#pragma region 9086. 문자열

	int t;
	string s;

	cin >> t;

	while (t--)
	{
		cin >> s;

		if (s.length() > 2)
			cout << s.front() << s.back() << "\n";
		else if (s.length() == 2)
			cout << s << "\n";
		else if (s.length() == 1)
			cout << s << s << "\n";
	}

#pragma endregion

	return 0;
}