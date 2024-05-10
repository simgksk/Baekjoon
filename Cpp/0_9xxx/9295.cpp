#include <iostream>

using namespace std;

int main()
{
	//9295. ÁÖ»çÀ§
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, a, b;

	cin >> t;

	for (int i = 1; i <= t; i++)
	{
		cin >> a >> b;

		int sum = a + b;

		cout << "Case " << i << ": " << sum << "\n";
	}

	return 0;
}