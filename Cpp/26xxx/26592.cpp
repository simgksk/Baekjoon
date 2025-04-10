#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	while (n--){
		float a, b;
		
		cin >> a >> b;

		float h = (a * 2) / b;

		cout << fixed;
		cout.precision(2);
		cout << "The height of the triangle is " << h << " units\n";
	}

	return 0;
}