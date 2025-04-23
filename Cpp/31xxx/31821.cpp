#include <iostream>
using namespace std;

int main() {
	int a[11] = {};
	int b;
	int n, m;
	int sum = 0;

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> b;
		sum += a[b - 1];
	}

	cout << sum;

	return 0;
}