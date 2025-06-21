#include <iostream>
using namespace std;

int binomialcoefficient(int n, int k) {
	if (k == 0 || k == n)
		return 1;
	if (k == 1)
		return n;
	return binomialcoefficient(n - 1, k - 1) + binomialcoefficient(n - 1, k);
}

int main() {
	int n, k;

	cin >> n >> k;

	int res = binomialcoefficient(n, k);

	cout << res;

	return 0;
}