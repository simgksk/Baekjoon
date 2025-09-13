#include <iostream>
using namespace std;

int main() {
	string animal;
	int lion = 0, tiger = 0;

	for (int i = 0; i < 9; i++) {
		cin >> animal;

		if (animal == "Lion")
			lion++;
		else if (animal == "Tiger")
			tiger++;
	}

	cout << ((lion > tiger) ? "Lion" : "Tiger");

	return 0;
}