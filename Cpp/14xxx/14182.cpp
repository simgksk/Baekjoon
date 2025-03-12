#include <iostream>
using namespace std;

int main() {
	int n;

	while (true){
		int tax = 0;

		cin >> n;

		if (n == 0)
			break;

		if (n < 1000000)
			tax = n;
		else if (n >= 1000000 && n < 5000000)
			tax = n - (n * 10 / 100);
		else if (n >= 5000000)
			tax = n - (n * 20 / 100);

		cout << tax << "\n";
	}
	return 0;
}