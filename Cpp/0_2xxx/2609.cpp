#include <iostream>
using namespace std;

int GCD(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int LCM(int a, int b) {
	return (a * b) / GCD(a, b);
}

int main() {
	int n, m;

	cin >> n >> m;

	int gcd = GCD(n, m);
	int lcm = LCM(n, m);

	cout << gcd << "\n" << lcm;

	return 0;
}