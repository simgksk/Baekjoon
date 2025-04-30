#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	long long int res = 0;

	cin >> n;

	for (int i = 1; i <= n; i *= 10) {
		res += n - i + 1;
	}

	cout << res;

	return 0;
}