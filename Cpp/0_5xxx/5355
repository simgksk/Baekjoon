#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t;
	float a;
	string s;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> a;
		getline(cin, s);

		for (int j = 0; j < s.length(); j++)
		{
			if (s[j] == '@')
				a *= 3;
			if (s[j] == '%')
				a += 5;
			if (s[j] == '#')
				a -= 7;
		}
			
		printf("%.2f\n", a);
	}

	return 0;
}
