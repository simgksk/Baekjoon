#include <iostream>

using namespace std;

int max(int a, int b)
{
	if (a % b == 0)
		return b;
	return max(b, a % b);
}

int min(int a, int b)
{
	return a * b / max(a, b);
}

int main()
{
	int t, a, b;

	cin >> t;

	while (t--)
	{
		cin >> a >> b;
		cout << min(a, b) << " " << max(a, b) << "\n";
	}

	return 0;
}