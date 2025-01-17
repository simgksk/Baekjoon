#include <iostream>

using namespace std;

int main() {
	int n, x, y, z;
	char c1, c2;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> x >> c1 >> y >> c2 >> z;

		if (c1 == '+') {
			if (x + y == z)
				cout << "Case " << i << ": YES\n";
			else
				cout << "Case " << i << ": NO\n";
		}
		else if (c1 == '-') {
			if (x - y == z)
				cout << "Case " << i << ": YES\n";
			else
				cout << "Case " << i << ": NO\n";
		}
	}
	return 0;
}