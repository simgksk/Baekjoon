#include <iostream>
using namespace std;

int main() {
	int n;
	char c;

	cin >> n;

	while (n--) {
		cin >> c;

		if (c == 'I')
			cout << "i";
		else if (c == 'l')
			cout << "L";
	}
	return 0;
}