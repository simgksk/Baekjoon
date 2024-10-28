#include <iostream>

using namespace std;

int main() {

	long long int p[100] = { 1, 1, 1, 2, 2, 3, 4, 5, 7, 9 };
	int t, n;

	cin >> t;

	while (t--){
		cin >> n;

		for (int i = 10; i <= n; i++) {
			p[i] = p[i - 1] + p[i - 5];
		}
		cout << p[n-1] << "\n";
	}
}