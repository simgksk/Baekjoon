#include <iostream>

using namespace std;

int main()
{
	// 1789. ������ ��
	long long n;
	long long sum = 0;
	long long max = 0;

	cin >> n;

	while (true)
	{
		max += 1;
		sum += max;

		if (sum > n)
			break;
	}

	cout << max - 1;

	return 0;
}