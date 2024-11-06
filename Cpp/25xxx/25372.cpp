#include <iostream>

using namespace std;

int main() {
	int n;
	string pw;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> pw;

		if (pw.size() >= 6 && pw.size() <= 9)
			cout << "yes\n";
		else
			cout << "no\n";
	}

	return 0;
}