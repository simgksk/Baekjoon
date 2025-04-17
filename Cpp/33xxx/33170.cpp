#include <iostream>
using namespace std;

int main() {
	int a, b, c;

	cin >> a >> b >> c;

	int sum = a + b + c;

	if (sum <= 21)
		cout << 1;
	else
		cout << 0;

	return 0;
}