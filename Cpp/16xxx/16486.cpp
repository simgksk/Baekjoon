#include <iostream>
using namespace std;

int main() {
	int d1, d2;
	int res1 = 0;
	float res2 = 0;

	cin >> d1 >> d2;

	res1 = d1 * 2;
	res2 = 2 * d2 * 3.141592;
	cout << fixed;
	cout.precision(6);
	cout << res1 + res2;

	return 0;
}