#include <iostream>
using namespace std;

int main() {
	int t;

	cin >> t;

	while (t--){
		long long n, candy;
		long long sum = 0;

		cin >> n;

		for (int i = 0; i < n; i++) {
			cin >> candy;
			sum = (sum + candy) % n;
		}

		if (sum % n == 0)
			cout << "YES\n";
		else if (sum % n != 0)
			cout << "NO\n";
	}
	return 0;
}