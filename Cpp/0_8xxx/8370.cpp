#include <iostream>

using namespace std;

int main() {
	int n1, k1, n2, k2;
	cin >> n1 >> k1 >> n2 >> k2;
	
	int business = n1 * k1;
	int economic = n2 * k2;

	cout << business + economic;

	return 0;
}