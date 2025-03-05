#include <iostream>
using namespace std;

int main() {
	int x;
	cin >> x;

	if (x % 3 == 1)
		cout << "U";
	else if (x % 3 == 2)
		cout << "O";
	else if (x % 3 == 0)
		cout << "S";

	return 0;
}