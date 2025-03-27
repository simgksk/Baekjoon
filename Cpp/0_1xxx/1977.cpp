#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	int m, n;
	int sum = 0;
	int min = -1;

	cin >> m >> n;

	for (int i = m; i <= n; i++) {
		int root = sqrt(i);

		if (root * root == i) {
			sum += i;

			if (min == -1)
				min = i;
		}
	}

	if (min == -1)
		cout << -1;
	else
		cout << sum << "\n" << min;

	return 0;
}