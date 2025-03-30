#include <iostream>
using namespace std;

int main() {
	int n, x, y;
	int southX = 0;
	int southY = 1001;

	cin >> n;

	while (n--){
		cin >> x >> y;

		if (y < southY) {
			southY = y;
			southX = x;
		}
	}
	cout << southX << " " << southY;

	return 0;
}