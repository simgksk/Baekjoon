#include <iostream>

using namespace std;

void Binary(long long int n)
{
	if (n <= 1)
		cout << 1;
	else
	{
		Binary(n / 2);

		cout << n % 2;
	}
}

int main()
{
	long long n;

	cin >> n;

	Binary(n);

	return 0;
}
