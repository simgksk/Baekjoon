#include <iostream>

using namespace std;

int main()
{
    	int n;
	int result = 0;
	string c[10001];
	string s;

	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> c[i];

	cin >> s;

	for (int i = 0; i < 10001; i++)
	{
		if (s == c[i])
			result++;
	}

	cout << result;

	return 0;
}
