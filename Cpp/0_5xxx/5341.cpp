#include <iostream>
using namespace std;

int main() {
	int a;

	while (true){
		int total = 0;

		cin >> a;

		if (a == 0)
			break;

		for (int i = 1; i <= a; i++)
			total += i;

		cout << total << "\n";
	}
	return 0;
}