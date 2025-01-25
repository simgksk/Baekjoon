#include <iostream>
using namespace std;

int main() {
	int arr[10001] = { 0, 1, };
	int n, k;
	int cnt = 0;

	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			arr[cnt] = i;
			cnt++;
		}
	}

	if (k)
		cout << arr[k - 1];
	else
		cout << 0;

	return 0;
}