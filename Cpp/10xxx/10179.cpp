#include <iostream>
using namespace std;

int main() {
	int t;
	double n;

	cin >> t;

	while (t--) {
		cin >> n;

		double res = n * .8;

		printf("$%.2f\n", res);
	}
	return 0;
}