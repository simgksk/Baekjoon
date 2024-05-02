#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t, n;
	string str;

	cin >> t;

	while (t--)
	{
		cin >> n >> str;

		cout << str.erase(n-1, 1) + "\n";
	}

	return 0;
}
