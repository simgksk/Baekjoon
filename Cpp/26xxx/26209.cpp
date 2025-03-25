#include <iostream>
using namespace std;

int main() {
	int n;
	bool b = true;

	for (int i = 0; i < 8; i++) {
		cin >> n;

		if (n != 1 && n != 0)
			b = false;
	}
	if (b == true)
		cout << "S";
	else
		cout << "F";

	return 0;
}