#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	//2675. ���ڿ� �ݺ�

	int t, p;
	string s;

	cin >> t;

	while (t--)
	{
		cin >> p >> s;

		for (int i = 0; i < s.length(); i++)
		{
			for (int j = 0; j < p; j++)
				cout << s[i];
		}
		cout << "\n";
	}

	return 0;
}