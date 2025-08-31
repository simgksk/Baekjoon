#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	char sum, equal;

	cin >> a >> sum >> b >> equal >> c;

	if (a + b == c)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}