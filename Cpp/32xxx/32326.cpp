#include <iostream>
using namespace std;

int main() {
	int r, g, b;

	cin >> r >> g >> b;

	int c = (r * 3) + (g * 4) + (b * 5);

	cout << c;

	return 0;
}