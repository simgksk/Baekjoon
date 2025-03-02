#include <iostream>
using namespace std;

int main() {
	int t;
	int n;
	int f;
	int sum = 0;

	cin >> t >> n;

	for (int i = 0; i < n; i++) {
		cin >> f;
		sum += f;
	}

	if (sum >= t)
		cout << "Padaeng_i Happy";
	else
		cout << "Padaeng_i Cry";

	return 0;
}