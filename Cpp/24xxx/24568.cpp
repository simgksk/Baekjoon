#include <iostream>
using namespace std;

int main() {
	int r, s;
	cin >> r >> s;

	int total = (r * 8) + (s * 3);

	cout << total - 28;

	return 0;
}