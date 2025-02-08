#include <iostream>
using namespace std;

int main() {
	int t, n, a, b;
	cin >> t;

	while (t--){
		cin >> n;

		while (n--){
			cin >> a >> b;

			int sum = a + b;
			int mul = a * b;

			cout << sum << " " << mul << "\n";
		}
	}
	return 0;
}