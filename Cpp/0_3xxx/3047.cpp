#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n[3] = {};
	string s;

	for (int i = 0; i < 3; i++)
		cin >> n[i];

	cin >> s;

	sort(n, n + 3);

	if (s == "ABC")
		cout << n[0] << " " << n[1] << " " << n[2];
	else if (s == "ACB")
		cout << n[0] << " " << n[2] << " " << n[1];
	else if (s == "BAC")
		cout << n[1] << " " << n[0] << " " << n[2];
	else if (s == "BCA")
		cout << n[1] << " " << n[2] << " " << n[0];
	else if (s == "CAB")
		cout << n[2] << " " << n[0] << " " << n[1];
	else if (s == "CBA")
		cout << n[2] << " " << n[1] << " " << n[0];

	return 0;
}