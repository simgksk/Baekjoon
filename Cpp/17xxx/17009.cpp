#include <iostream>
using namespace std;

int main() {
	int a, b;
	int a_sum = 0, b_sum = 0;

	for (int i = 0; i < 3; i++) {
		cin >> a;

		a_sum += a * (3 - i);
	}
	for (int i = 0; i < 3; i++) {
		cin >> b;

		b_sum += b * (3 - i);
	}

	if (a_sum > b_sum)
		cout << "A";
	else if (a_sum < b_sum)
		cout << "B";
	else
		cout << "T";

	return 0;
}