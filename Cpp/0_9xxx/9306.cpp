#include <iostream>
using namespace std;

int main() {
	int n;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		string first, last;

		cin >> first >> last;

		cout << "Case " << i << ": " << last << ", " << first << "\n";
	}

	return 0;
}