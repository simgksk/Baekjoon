#include <iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	int c = a * (100 - b) / 100;

	if (c >= 100)
		cout << 0;
	else
		cout << 1;

	return 0;
}