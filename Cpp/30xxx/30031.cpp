#include <iostream>
using namespace std;

int main() {
	int n, w, h;
	int sum = 0;

	cin >> n;

	while (n--)	{
		cin >> w >> h;

		if (w == 136)
			sum += 1000;
		else if (w == 142)
			sum += 5000;
		else if (w == 148)
			sum += 10000;
		else if (w == 154)
			sum += 50000;
	}

	cout << sum;

	return 0;
}