#include <iostream>
#include <numeric>
using namespace std;

int main() {
	int a1, b1, a2, b2;

	cin >> a1 >> b1 >> a2 >> b2;

	int a = (a1 * b2) + (a2 * b1);
	int b = b1 * b2;
	int g = gcd(a, b);

	cout << a/g << " " << b/g;

	return 0;
}
