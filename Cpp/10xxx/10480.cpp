#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	int num;

	cin >> n;

	while (n--) {
		cin >> num;

		if (abs(num) % 2 == 0)
			cout << num << " is even\n";
		else
			cout << num << " is odd\n";
	}
	return 0;
}