#include <iostream>
using namespace std;

int main() {
	long long dp[1001];
	int n;

	cin >> n;

	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 3;

	for (int i = 3; i <= n; i++) {
		dp[i] = (dp[i - 1] + 2 * dp[i - 2]) % 10007;
	}

	cout << dp[n];

	return 0;
}