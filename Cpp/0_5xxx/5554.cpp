#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int time;
	int n = 4;
	int _time = 0;

	while (n--)
	{
		cin >> time;

		_time += time;
	}

	int x = _time / 60;
	int y = _time % 60;

	cout << x << "\n";
	cout << y;

	return 0;
}