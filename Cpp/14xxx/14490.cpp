#include <iostream>
using namespace std;

int gcd(int a, int b) {
	while (b != 0) {
		int temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

int main() {
	int n, m;
	char c;

	cin >> n >> c >> m;

	int g = gcd(n, m);

	cout << n/g << ":" << m/g;

	return 0;
}