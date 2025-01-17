#include <iostream>

using namespace std;

int main() {
	int a, b;

	while (true){
		cin >> a >> b;
		if (a == 0 && b == 0)
			break;
		int c = a / b;
		int d = a % b;

		cout << c << " " << d << " / " << b << "\n";
	}
	return 0;
}