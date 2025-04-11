#include <iostream>
#include <string>
using namespace std;

int main() {
	string n;

	cin >> n;

	int num = stoi(n);

	if (n.find('7') != string::npos) {
		if (num % 7 == 0)
			cout << 3;
		else
			cout << 2;
	}

	else {
		if (num % 7 == 0)
			cout << 1;
		else
			cout << 0;
	}

	return 0;
}