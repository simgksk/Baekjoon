#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	string n1;

	cin >> n1;

	string n2 = n1;

	reverse(n2.begin(), n2.end());

	if (n1 == n2)
		cout << 1;
	else
		cout << 0;

	return 0;
}