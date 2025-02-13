#include <iostream>
using namespace std;

int main() {
	int n;
	int total = 0;
	string s;

	cin >> n;

	while (n--){
		cin >> s;

		if (s == "Poblano")
			total += 1500;
		else if (s == "Mirasol")
			total += 6000;
		else if (s == "Serrano")
			total += 15500;
		else if (s == "Cayenne")
			total += 40000;
		else if (s == "Thai")
			total += 75000;
		else if (s == "Habanero")
			total += 125000;
	}
	cout << total;

	return 0;
}