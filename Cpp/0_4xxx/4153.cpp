#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long a, b, c;

	while (true){
		cin >> a >> b >> c;

		if (a == 0 && b == 0 && c == 0)
			break;

		long aa = a * a;
		long bb = b * b;
		long cc = c * c;

		if (a + b == c || a + c == b || b + c == a)
			cout << "right\n";
		else
			cout << "wrong\n";
	}

	return 0;
}