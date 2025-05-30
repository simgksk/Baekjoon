#include <iostream>
using namespace std;

int main() {
	int n;
	double num;
	double max = 0;
	double sum = 0;
	double result = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;
		sum += num;

		if (num > max) {
			max = num;
		}
	}

	result = ((sum / max) / n) * 100;

	cout << result;

	return 0;
}