#include <iostream>
#include <string>

using namespace std;

int main()
{
	// 26768. H4x0r
	string s;

	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'a')
			s[i] = '4';
		if (s[i] == 'e')
			s[i] = '3';
		if (s[i] == 'i')
			s[i] = '1';
		if (s[i] == 'o')
			s[i] = '0';
		if (s[i] == 's')
			s[i] = '5';
	}
	cout << s;

	return 0;
}