#include <iostream>
#include <string>

using namespace std;

int main()
{
	//5598. 카이사르 암호
	string str;
	char ch;

	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		char c = str[i];

		if (int(c) > 64 && int(c) < 68)
			ch = int(c) + 23;
		else
			ch = int(c) - 3;
		cout << ch;
	}

	return 0;
}