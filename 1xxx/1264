#include <iostream>
#include <string>

using namespace std;

int main()
{
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

	return 0;
}
