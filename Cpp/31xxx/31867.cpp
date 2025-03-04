#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	char c;
	int even = 0;
	int odd = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> c;

		int num = c - '0';

		if (num % 2 == 0)
			even++;
		else
			odd++;
	}

	if (even > odd)
		cout << 0;
	else if (even < odd)
		cout << 1;
	else
		cout << -1;

	return 0;
}