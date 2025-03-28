#include <iostream>
using namespace std;

int main() {
	int n;
	int max = 0;
	string s;
	string name = "";

	for (int i = 0; i < 7; i++) {
		cin >> s >> n;

		if (n > max) {
			max = n;
			name = s;
		}
	}
	cout << name;

	return 0;
}